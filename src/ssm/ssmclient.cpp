/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ssmclient.h"
#include "ssmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SSM {

/**
 * @class  SsmClient
 *
 * @brief  Client for Amazon Simple Systems Management Service ( SSM)
 *
 * Amazon EC2 Simple Systems Manager (SSM) enables you to remotely manage the configuration of your Amazon EC2 instances,
 * virtual machines (VMs), or servers in your on-premises environment or in an environment provided by other cloud
 * providers using scripts, commands, or the Amazon EC2 console. SSM includes an on-demand solution called <i>Amazon EC2
 * Run Command</i> and a lightweight instance configuration solution called <i>SSM Config</i>.
 *
 * </p
 *
 * This references is intended to be used with the EC2 Run Command User Guide for <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/execute-remote-commands.html">Linux</a> or <a
 *
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/execute-remote-commands.html">Windows</a>> <note>
 *
 * You must register your on-premises servers and VMs through an activation process before you can configure them using Run
 * Command. Registered servers and VMs are called <i>managed instances</i>. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting Up Run Command On Managed
 * Instances (On-Premises Servers and VMs) on Linux</a> or <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting Up Run Command On Managed
 * Instances (On-Premises Servers and VMs) on
 *
 * Windows</a>> </note>
 *
 * <b>Run Command</b>
 *
 * </p
 *
 * Run Command provides an on-demand experience for executing commands. You can use pre-defined SSM documents to perform
 * the actions listed later in this section, or you can create your own documents. With these documents, you can remotely
 * configure your instances by sending commands using the <b>Commands</b> page in the <a
 * href="http://console.aws.amazon.com/ec2/">Amazon EC2 console</a>, <a
 * href="http://docs.aws.amazon.com/powershell/latest/reference/items/Amazon_Simple_Systems_Management_cmdlets.html">AWS
 * Tools for Windows PowerShell</a>, the <a href="http://docs.aws.amazon.com/cli/latest/reference/ssm/index.html">AWS
 * CLI</a>, or AWS
 *
 * SDKs>
 *
 * Run Command reports the status of the command execution for each instance targeted by a command. You can also audit the
 * command execution to understand who executed commands, when, and what changes were made. By switching between different
 * SSM documents, you can quickly configure your instances with different types of commands. To get started with Run
 * Command, verify that your environment meets the prerequisites for remotely running commands on EC2 instances (<a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/remote-commands-prereq.html">Linux</a> or <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/remote-commands-prereq.html">Windows</a>).
 *
 * </p <p/>
 *
 * <b>SSM Config</b>
 *
 * </p
 *
 * SSM Config is a lightweight instance configuration solution. SSM Config is currently only available for Windows
 * instances. With SSM Config, you can specify a setup configuration for your instances. SSM Config is similar to EC2 User
 * Data, which is another way of running one-time scripts or applying settings during instance launch. SSM Config is an
 * extension of this capability. Using SSM documents, you can specify which actions the system should perform on your
 * instances, including which applications to install, which AWS Directory Service directory to join, which Microsoft
 * PowerShell modules to install, etc. If an instance is missing one or more of these configurations, the system makes
 * those changes. By default, the system checks every five minutes to see if there is a new configuration to apply as
 * defined in a new SSM document. If so, the system updates the instances accordingly. In this way, you can remotely
 * maintain a consistent configuration baseline on your instances. SSM Config is available using the AWS CLI or the AWS
 * Tools for Windows PowerShell. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-configuration-manage.html">Managing Windows Instance
 *
 * Configuration</a>>
 *
 * SSM Config and Run Command include the following pre-defined
 *
 * documents>
 *
 * <b>Linux</b>
 *
 * </p <ul> <li>
 *
 * <b>AWS-RunShellScript</b> to run shell
 *
 * script> </li> <li>
 *
 * <b>AWS-UpdateSSMAgent</b> to update the Amazon SSM
 *
 * agen> </li> </ul> <p/>
 *
 * <b>Windows</b>
 *
 * </p <ul> <li>
 *
 * <b>AWS-JoinDirectoryServiceDomain</b> to join an AWS
 *
 * Director> </li> <li>
 *
 * <b>AWS-RunPowerShellScript</b> to run PowerShell commands or
 *
 * script> </li> <li>
 *
 * <b>AWS-UpdateEC2Config</b> to update the EC2Config
 *
 * servic> </li> <li>
 *
 * <b>AWS-ConfigureWindowsUpdate</b> to configure Windows Update
 *
 * setting> </li> <li>
 *
 * <b>AWS-InstallApplication</b> to install, repair, or uninstall software using an MSI
 *
 * packag> </li> <li>
 *
 * <b>AWS-InstallPowerShellModule</b> to install PowerShell modules
 *
 * </p </li> <li>
 *
 * <b>AWS-ConfigureCloudWatch</b> to configure Amazon CloudWatch Logs to monitor applications and
 *
 * system> </li> <li>
 *
 * <b>AWS-ListWindowsInventory</b> to collect information about an EC2 instance running in
 *
 * Windows> </li> <li>
 *
 * <b>AWS-FindWindowsUpdates</b> to scan an instance and determines which updates are
 *
 * missing> </li> <li>
 *
 * <b>AWS-InstallMissingWindowsUpdates</b> to install missing updates on your EC2
 *
 * instance> </li> <li>
 *
 * <b>AWS-InstallSpecificWindowsUpdates</b> to install one or more specific
 *
 * updates> </li> </ul> <important>
 *
 * The commands or scripts specified in SSM documents run with administrative privilege on your instances because the
 * Amazon SSM agent runs as root on Linux and the EC2Config service runs in the Local System account on Windows. If a user
 * has permission to execute any of the pre-defined SSM documents (any document that begins with AWS-*) then that user also
 * has administrator access to the instance. Delegate access to Run Command and SSM Config judiciously. This becomes
 * extremely important if you create your own SSM documents. Amazon Web Services does not provide guidance about how to
 * create secure SSM documents. You create SSM documents and delegate access to Run Command at your own risk. As a security
 * best practice, we recommend that you assign access to "AWS-*" documents, especially the AWS-RunShellScript document on
 * Linux and the AWS-RunPowerShellScript document on Windows, to trusted administrators only. You can create SSM documents
 * for specific tasks and delegate access to
 *
 * non-administrators> </important>
 *
 * For information about creating and sharing SSM documents, see the following topics in the SSM User Guide:
 *
 * </p <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-ssm-doc.html">Creating SSM Documents</a> and <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssm-sharing.html">Sharing SSM Documents</a>
 *
 * (Linux> </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/create-ssm-doc.html">Creating SSM Documents</a> and <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ssm-sharing.html">Sharing SSM Documents</a>
 */

/**
 * @brief  Constructs a new SsmClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SsmClient::SsmClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SsmClientPrivate(this), parent)
{
    Q_D(SsmClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SsmClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
SsmClient::SsmClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SsmClientPrivate(this), parent)
{
    Q_D(SsmClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  SsmClientPrivate
 *
 * @brief  Private implementation for SsmClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SsmClientPrivate object.
 *
 * @param  q  Pointer to this object's public SsmClient instance.
 */
SsmClientPrivate::SsmClientPrivate(SsmClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SSM
} // namespace AWS

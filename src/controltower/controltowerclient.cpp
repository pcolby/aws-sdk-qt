// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "controltowerclient.h"
#include "controltowerclient_p.h"

#include "core/awssignaturev4.h"
#include "disablecontrolrequest.h"
#include "disablecontrolresponse.h"
#include "enablecontrolrequest.h"
#include "enablecontrolresponse.h"
#include "getcontroloperationrequest.h"
#include "getcontroloperationresponse.h"
#include "listenabledcontrolsrequest.h"
#include "listenabledcontrolsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ControlTower
 * \brief Contains classess for accessing AWS Control Tower.
 *
 * \inmodule QtAwsControlTower
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ControlTower {

/*!
 * \class QtAws::ControlTower::ControlTowerClient
 * \brief The ControlTowerClient class provides access to the AWS Control Tower service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsControlTower
 *
 *  These interfaces allow you to apply the AWS library of pre-defined <i>controls</i> to your organizational units,
 *  programmatically. In this context, controls are the same as AWS Control Tower
 * 
 *  guardrails>
 * 
 *  To call these APIs, you'll need to
 * 
 *  know> <ul> <li>
 * 
 *  the <code>ControlARN</code> for the control--that is, the guardrail--you are
 * 
 *  targeting> </li> <li>
 * 
 *  and the ARN associated with the target organizational unit
 * 
 *  (OU)> </li> </ul>
 * 
 *  <b>To get the <code>ControlARN</code> for your AWS Control Tower guardrail:</b>
 * 
 *  </p
 * 
 *  The <code>ControlARN</code> contains the control name which is specified in each guardrail. For a list of control names
 *  for <i>Strongly recommended</i> and <i>Elective</i> guardrails, see <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html.html">Resource identifiers for
 *  APIs and guardrails</a> in the <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/automating-tasks.html">Automating tasks section</a> of
 *  the AWS Control Tower User Guide. Remember that <i>Mandatory</i> guardrails cannot be added or
 * 
 *  removed> <note>
 * 
 *  <b>ARN format:</b> <code>arn:aws:controltower:{REGION}::control/{CONTROL_NAME}</code>
 * 
 *  </p
 * 
 *  <b>Example:</b>
 * 
 *  </p
 * 
 *  <code>arn:aws:controltower:us-west-2::control/AWS-GR_AUTOSCALING_LAUNCH_CONFIG_PUBLIC_IP_DISABLED</code>
 * 
 *  </p </note>
 * 
 *  <b>To get the ARN for an OU:</b>
 * 
 *  </p
 * 
 *  In the AWS Organizations console, you can find the ARN for the OU on the <b>Organizational unit details</b> page
 *  associated with that
 * 
 *  OU> <note>
 * 
 *  <b>OU ARN format:</b>
 * 
 *  </p
 * 
 *  <code>arn:${Partition}:organizations::${MasterAccountId}:ou/o-${OrganizationId}/ou-${OrganizationalUnitId}</code>
 * 
 *  </p </note> <p class="title"> <b>Details and examples</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">List of resource
 *  identifiers for APIs and guardrails</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/guardrail-api-examples-short.html">Guardrail API
 *  examples (CLI)</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/enable-controls.html">Enable controls with AWS
 *  CloudFormation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/creating-resources-with-cloudformation.html">Creating
 *  AWS Control Tower resources with AWS CloudFormation</a>
 * 
 *  </p </li> </ul>
 * 
 *  To view the open source resource repository on GitHub, see <a
 *  href="https://github.com/aws-cloudformation/aws-cloudformation-resource-providers-controltower">aws-cloudformation/aws-cloudformation-resource-providers-controltower</a>
 * 
 *  </p
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  AWS Control Tower supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information collected by CloudTrail, you can determine which requests the AWS
 *  Control Tower service received, who made the request and when, and so on. For more about AWS Control Tower and its
 *  support for CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/logging-using-cloudtrail.html">Logging AWS Control Tower
 *  Actions with AWS CloudTrail</a> in the AWS Control Tower User Guide. To learn more about CloudTrail, including how to
 *  turn it on and find your log files, see the AWS CloudTrail User
 */

/*!
 * \brief Constructs a ControlTowerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ControlTowerClient::ControlTowerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ControlTowerClientPrivate(this), parent)
{
    Q_D(ControlTowerClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("controltower");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Control Tower");
    d->serviceName = QStringLiteral("controltower");
}

/*!
 * \overload ControlTowerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ControlTowerClient::ControlTowerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ControlTowerClientPrivate(this), parent)
{
    Q_D(ControlTowerClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("controltower");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Control Tower");
    d->serviceName = QStringLiteral("controltower");
}

/*!
 * Sends \a request to the ControlTowerClient service, and returns a pointer to an
 * DisableControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API call turns off a control. It starts an asynchronous operation that deletes AWS resources on the specified
 * organizational unit and the accounts it contains. The resources will vary according to the control that you
 */
DisableControlResponse * ControlTowerClient::disableControl(const DisableControlRequest &request)
{
    return qobject_cast<DisableControlResponse *>(send(request));
}

/*!
 * Sends \a request to the ControlTowerClient service, and returns a pointer to an
 * EnableControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API call activates a control. It starts an asynchronous operation that creates AWS resources on the specified
 * organizational unit and the accounts it contains. The resources created will vary according to the control that you
 */
EnableControlResponse * ControlTowerClient::enableControl(const EnableControlRequest &request)
{
    return qobject_cast<EnableControlResponse *>(send(request));
}

/*!
 * Sends \a request to the ControlTowerClient service, and returns a pointer to an
 * GetControlOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the status of a particular <code>EnableControl</code> or <code>DisableControl</code> operation. Displays a
 * message in case of error. Details for an operation are available for 90
 */
GetControlOperationResponse * ControlTowerClient::getControlOperation(const GetControlOperationRequest &request)
{
    return qobject_cast<GetControlOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ControlTowerClient service, and returns a pointer to an
 * ListEnabledControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the controls enabled by AWS Control Tower on the specified organizational unit and the accounts it
 */
ListEnabledControlsResponse * ControlTowerClient::listEnabledControls(const ListEnabledControlsRequest &request)
{
    return qobject_cast<ListEnabledControlsResponse *>(send(request));
}

/*!
 * \class QtAws::ControlTower::ControlTowerClientPrivate
 * \brief The ControlTowerClientPrivate class provides private implementation for ControlTowerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ControlTowerClientPrivate object with public implementation \a q.
 */
ControlTowerClientPrivate::ControlTowerClientPrivate(ControlTowerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ControlTower
} // namespace QtAws

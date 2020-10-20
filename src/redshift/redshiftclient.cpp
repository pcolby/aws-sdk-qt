/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "redshiftclient.h"
#include "redshiftclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptreservednodeexchangerequest.h"
#include "acceptreservednodeexchangeresponse.h"
#include "authorizeclustersecuritygroupingressrequest.h"
#include "authorizeclustersecuritygroupingressresponse.h"
#include "authorizesnapshotaccessrequest.h"
#include "authorizesnapshotaccessresponse.h"
#include "batchdeleteclustersnapshotsrequest.h"
#include "batchdeleteclustersnapshotsresponse.h"
#include "batchmodifyclustersnapshotsrequest.h"
#include "batchmodifyclustersnapshotsresponse.h"
#include "cancelresizerequest.h"
#include "cancelresizeresponse.h"
#include "copyclustersnapshotrequest.h"
#include "copyclustersnapshotresponse.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createclusterparametergrouprequest.h"
#include "createclusterparametergroupresponse.h"
#include "createclustersecuritygrouprequest.h"
#include "createclustersecuritygroupresponse.h"
#include "createclustersnapshotrequest.h"
#include "createclustersnapshotresponse.h"
#include "createclustersubnetgrouprequest.h"
#include "createclustersubnetgroupresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "createhsmclientcertificaterequest.h"
#include "createhsmclientcertificateresponse.h"
#include "createhsmconfigurationrequest.h"
#include "createhsmconfigurationresponse.h"
#include "createsnapshotcopygrantrequest.h"
#include "createsnapshotcopygrantresponse.h"
#include "createsnapshotschedulerequest.h"
#include "createsnapshotscheduleresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deleteclusterparametergrouprequest.h"
#include "deleteclusterparametergroupresponse.h"
#include "deleteclustersecuritygrouprequest.h"
#include "deleteclustersecuritygroupresponse.h"
#include "deleteclustersnapshotrequest.h"
#include "deleteclustersnapshotresponse.h"
#include "deleteclustersubnetgrouprequest.h"
#include "deleteclustersubnetgroupresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
#include "deletehsmclientcertificaterequest.h"
#include "deletehsmclientcertificateresponse.h"
#include "deletehsmconfigurationrequest.h"
#include "deletehsmconfigurationresponse.h"
#include "deletesnapshotcopygrantrequest.h"
#include "deletesnapshotcopygrantresponse.h"
#include "deletesnapshotschedulerequest.h"
#include "deletesnapshotscheduleresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describeclusterdbrevisionsrequest.h"
#include "describeclusterdbrevisionsresponse.h"
#include "describeclusterparametergroupsrequest.h"
#include "describeclusterparametergroupsresponse.h"
#include "describeclusterparametersrequest.h"
#include "describeclusterparametersresponse.h"
#include "describeclustersecuritygroupsrequest.h"
#include "describeclustersecuritygroupsresponse.h"
#include "describeclustersnapshotsrequest.h"
#include "describeclustersnapshotsresponse.h"
#include "describeclustersubnetgroupsrequest.h"
#include "describeclustersubnetgroupsresponse.h"
#include "describeclustertracksrequest.h"
#include "describeclustertracksresponse.h"
#include "describeclusterversionsrequest.h"
#include "describeclusterversionsresponse.h"
#include "describeclustersrequest.h"
#include "describeclustersresponse.h"
#include "describedefaultclusterparametersrequest.h"
#include "describedefaultclusterparametersresponse.h"
#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesresponse.h"
#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describehsmclientcertificatesrequest.h"
#include "describehsmclientcertificatesresponse.h"
#include "describehsmconfigurationsrequest.h"
#include "describehsmconfigurationsresponse.h"
#include "describeloggingstatusrequest.h"
#include "describeloggingstatusresponse.h"
#include "describeorderableclusteroptionsrequest.h"
#include "describeorderableclusteroptionsresponse.h"
#include "describereservednodeofferingsrequest.h"
#include "describereservednodeofferingsresponse.h"
#include "describereservednodesrequest.h"
#include "describereservednodesresponse.h"
#include "describeresizerequest.h"
#include "describeresizeresponse.h"
#include "describesnapshotcopygrantsrequest.h"
#include "describesnapshotcopygrantsresponse.h"
#include "describesnapshotschedulesrequest.h"
#include "describesnapshotschedulesresponse.h"
#include "describestoragerequest.h"
#include "describestorageresponse.h"
#include "describetablerestorestatusrequest.h"
#include "describetablerestorestatusresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "disableloggingrequest.h"
#include "disableloggingresponse.h"
#include "disablesnapshotcopyrequest.h"
#include "disablesnapshotcopyresponse.h"
#include "enableloggingrequest.h"
#include "enableloggingresponse.h"
#include "enablesnapshotcopyrequest.h"
#include "enablesnapshotcopyresponse.h"
#include "getclustercredentialsrequest.h"
#include "getclustercredentialsresponse.h"
#include "getreservednodeexchangeofferingsrequest.h"
#include "getreservednodeexchangeofferingsresponse.h"
#include "modifyclusterrequest.h"
#include "modifyclusterresponse.h"
#include "modifyclusterdbrevisionrequest.h"
#include "modifyclusterdbrevisionresponse.h"
#include "modifyclusteriamrolesrequest.h"
#include "modifyclusteriamrolesresponse.h"
#include "modifyclustermaintenancerequest.h"
#include "modifyclustermaintenanceresponse.h"
#include "modifyclusterparametergrouprequest.h"
#include "modifyclusterparametergroupresponse.h"
#include "modifyclustersnapshotrequest.h"
#include "modifyclustersnapshotresponse.h"
#include "modifyclustersnapshotschedulerequest.h"
#include "modifyclustersnapshotscheduleresponse.h"
#include "modifyclustersubnetgrouprequest.h"
#include "modifyclustersubnetgroupresponse.h"
#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionresponse.h"
#include "modifysnapshotcopyretentionperiodrequest.h"
#include "modifysnapshotcopyretentionperiodresponse.h"
#include "modifysnapshotschedulerequest.h"
#include "modifysnapshotscheduleresponse.h"
#include "purchasereservednodeofferingrequest.h"
#include "purchasereservednodeofferingresponse.h"
#include "rebootclusterrequest.h"
#include "rebootclusterresponse.h"
#include "resetclusterparametergrouprequest.h"
#include "resetclusterparametergroupresponse.h"
#include "resizeclusterrequest.h"
#include "resizeclusterresponse.h"
#include "restorefromclustersnapshotrequest.h"
#include "restorefromclustersnapshotresponse.h"
#include "restoretablefromclustersnapshotrequest.h"
#include "restoretablefromclustersnapshotresponse.h"
#include "revokeclustersecuritygroupingressrequest.h"
#include "revokeclustersecuritygroupingressresponse.h"
#include "revokesnapshotaccessrequest.h"
#include "revokesnapshotaccessresponse.h"
#include "rotateencryptionkeyrequest.h"
#include "rotateencryptionkeyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Redshift
 * \brief Contains classess for accessing Amazon Redshift.
 *
 * \inmodule QtAwsRedshift
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RedshiftClient
 * \brief The RedshiftClient class provides access to the Amazon Redshift service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon
 *  Redshift Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 */

/*!
 * \brief Constructs a RedshiftClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RedshiftClient::RedshiftClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RedshiftClientPrivate(this), parent)
{
    Q_D(RedshiftClient);
    d->apiVersion = QStringLiteral("2012-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("redshift");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Redshift");
    d->serviceName = QStringLiteral("redshift");
}

/*!
 * \overload RedshiftClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RedshiftClient::RedshiftClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RedshiftClientPrivate(this), parent)
{
    Q_D(RedshiftClient);
    d->apiVersion = QStringLiteral("2012-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("redshift");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Redshift");
    d->serviceName = QStringLiteral("redshift");
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * AcceptReservedNodeExchangeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exchanges a DC1 Reserved Node for a DC2 Reserved Node with no changes to the configuration (term, payment type, or
 * number of nodes) and no additional costs.
 */
AcceptReservedNodeExchangeResponse * RedshiftClient::acceptReservedNodeExchange(const AcceptReservedNodeExchangeRequest &request)
{
    return qobject_cast<AcceptReservedNodeExchangeResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * AuthorizeClusterSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an inbound (ingress) rule to an Amazon Redshift security group. Depending on whether the application accessing your
 * cluster is running on the Internet or an Amazon EC2 instance, you can authorize inbound access to either a Classless
 * Interdomain Routing (CIDR)/Internet Protocol (IP) range or to an Amazon EC2 security group. You can add as many as 20
 * ingress rules to an Amazon Redshift security
 *
 * group>
 *
 * If you authorize access to an Amazon EC2 security group, specify <i>EC2SecurityGroupName</i> and
 * <i>EC2SecurityGroupOwnerId</i>. The Amazon EC2 security group and Amazon Redshift cluster must be in the same AWS
 * Region.
 *
 * </p
 *
 * If you authorize access to a CIDR/IP address range, specify <i>CIDRIP</i>. For an overview of CIDR blocks, see the
 * Wikipedia article on <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless Inter-Domain
 * Routing</a>.
 *
 * </p
 *
 * You must also associate the security group with a cluster so that clients running on these IP addresses or the EC2
 * instance are authorized to connect to the cluster. For information about managing security groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working with Security
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 */
AuthorizeClusterSecurityGroupIngressResponse * RedshiftClient::authorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest &request)
{
    return qobject_cast<AuthorizeClusterSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * AuthorizeSnapshotAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Authorizes the specified AWS customer account to restore the specified
 *
 * snapshot>
 *
 * For more information about working with snapshots, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 */
AuthorizeSnapshotAccessResponse * RedshiftClient::authorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest &request)
{
    return qobject_cast<AuthorizeSnapshotAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * BatchDeleteClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a set of cluster
 */
BatchDeleteClusterSnapshotsResponse * RedshiftClient::batchDeleteClusterSnapshots(const BatchDeleteClusterSnapshotsRequest &request)
{
    return qobject_cast<BatchDeleteClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * BatchModifyClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a list of
 */
BatchModifyClusterSnapshotsResponse * RedshiftClient::batchModifyClusterSnapshots(const BatchModifyClusterSnapshotsRequest &request)
{
    return qobject_cast<BatchModifyClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CancelResizeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a resize
 */
CancelResizeResponse * RedshiftClient::cancelResize(const CancelResizeRequest &request)
{
    return qobject_cast<CancelResizeResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CopyClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified automated cluster snapshot to a new manual cluster snapshot. The source must be an automated
 * snapshot and it must be in the available
 *
 * state>
 *
 * When you delete a cluster, Amazon Redshift deletes any automated snapshots of the cluster. Also, when the retention
 * period of the snapshot expires, Amazon Redshift automatically deletes it. If you want to keep an automated snapshot for
 * a longer period, you can make a manual copy of the snapshot. Manual snapshots are retained until you delete
 *
 * them>
 *
 * For more information about working with snapshots, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 */
CopyClusterSnapshotResponse * RedshiftClient::copyClusterSnapshot(const CopyClusterSnapshotRequest &request)
{
    return qobject_cast<CopyClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 *
 * cluster>
 *
 * To create a cluster in Virtual Private Cloud (VPC), you must provide a cluster subnet group name. The cluster subnet
 * group identifies the subnets of your VPC that Amazon Redshift uses when creating the cluster. For more information about
 * managing clusters, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
 * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
 */
CreateClusterResponse * RedshiftClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Redshift parameter
 *
 * group>
 *
 * Creating parameter groups is independent of creating clusters. You can associate a cluster with a parameter group when
 * you create the cluster. You can also associate an existing cluster with a parameter group after the cluster is created
 * by using <a>ModifyCluster</a>.
 *
 * </p
 *
 * Parameters in the parameter group define specific behavior that applies to the databases you create on the cluster. For
 * more information about parameters and parameter groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 */
CreateClusterParameterGroupResponse * RedshiftClient::createClusterParameterGroup(const CreateClusterParameterGroupRequest &request)
{
    return qobject_cast<CreateClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateClusterSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Redshift security group. You use security groups to control access to non-VPC
 *
 * clusters>
 *
 * For information about managing security groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster
 * Security Groups</a> in the <i>Amazon Redshift Cluster Management
 */
CreateClusterSecurityGroupResponse * RedshiftClient::createClusterSecurityGroup(const CreateClusterSecurityGroupRequest &request)
{
    return qobject_cast<CreateClusterSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a manual snapshot of the specified cluster. The cluster must be in the <code>available</code> state.
 *
 * </p
 *
 * For more information about working with snapshots, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 */
CreateClusterSnapshotResponse * RedshiftClient::createClusterSnapshot(const CreateClusterSnapshotRequest &request)
{
    return qobject_cast<CreateClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateClusterSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Redshift subnet group. You must provide a list of one or more subnets in your existing Amazon
 * Virtual Private Cloud (Amazon VPC) when creating Amazon Redshift subnet
 *
 * group>
 *
 * For information about subnet groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon Redshift Cluster
 * Subnet Groups</a> in the <i>Amazon Redshift Cluster Management
 */
CreateClusterSubnetGroupResponse * RedshiftClient::createClusterSubnetGroup(const CreateClusterSubnetGroupRequest &request)
{
    return qobject_cast<CreateClusterSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Redshift event notification subscription. This action requires an ARN (Amazon Resource Name) of an
 * Amazon SNS topic created by either the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To obtain
 * an ARN with Amazon SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the
 * SNS
 *
 * console>
 *
 * You can specify the source type, and lists of Amazon Redshift source IDs, event categories, and event severities.
 * Notifications will be sent for all events you want that match those criteria. For example, you can specify source type =
 * cluster, source ID = my-cluster-1 and mycluster2, event categories = Availability, Backup, and severity = ERROR. The
 * subscription will only send notifications for those ERROR events in the Availability and Backup categories for the
 * specified
 *
 * clusters>
 *
 * If you specify both the source type and source IDs, such as source type = cluster and source identifier = my-cluster-1,
 * notifications will be sent for all the cluster events for my-cluster-1. If you specify a source type but do not specify
 * a source identifier, you will receive notice of the events for the objects of that type in your AWS account. If you do
 * not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all Amazon
 * Redshift sources belonging to your AWS account. You must specify a source type if you specify a source
 */
CreateEventSubscriptionResponse * RedshiftClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateHsmClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an HSM client certificate that an Amazon Redshift cluster will use to connect to the client's HSM in order to
 * store and retrieve the keys used to encrypt the cluster
 *
 * databases>
 *
 * The command returns a public key, which you must store in the HSM. In addition to creating the HSM certificate, you must
 * create an Amazon Redshift HSM configuration that provides a cluster the information needed to store and use encryption
 * keys in the HSM. For more information, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the
 * Amazon Redshift Cluster Management
 */
CreateHsmClientCertificateResponse * RedshiftClient::createHsmClientCertificate(const CreateHsmClientCertificateRequest &request)
{
    return qobject_cast<CreateHsmClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateHsmConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an HSM configuration that contains the information required by an Amazon Redshift cluster to store and use
 * database encryption keys in a Hardware Security Module (HSM). After creating the HSM configuration, you can specify it
 * as a parameter when creating a cluster. The cluster will then store its encryption keys in the
 *
 * HSM>
 *
 * In addition to creating an HSM configuration, you must also create an HSM client certificate. For more information, go
 * to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the
 * Amazon Redshift Cluster Management
 */
CreateHsmConfigurationResponse * RedshiftClient::createHsmConfiguration(const CreateHsmConfigurationRequest &request)
{
    return qobject_cast<CreateHsmConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateSnapshotCopyGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot copy grant that permits Amazon Redshift to use a customer master key (CMK) from AWS Key Management
 * Service (AWS KMS) to encrypt copied snapshots in a destination
 *
 * region>
 *
 * For more information about managing snapshot copy grants, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon Redshift Database
 * Encryption</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 */
CreateSnapshotCopyGrantResponse * RedshiftClient::createSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest &request)
{
    return qobject_cast<CreateSnapshotCopyGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateSnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new snapshot
 */
CreateSnapshotScheduleResponse * RedshiftClient::createSnapshotSchedule(const CreateSnapshotScheduleRequest &request)
{
    return qobject_cast<CreateSnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a specified
 *
 * resource>
 *
 * A resource can have up to 50 tags. If you try to create more than 50 tags for a resource, you will receive an error and
 * the attempt will
 *
 * fail>
 *
 * If you specify a key that already exists for the resource, the value for that key will be updated with the new
 */
CreateTagsResponse * RedshiftClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously provisioned cluster. A successful response from the web service indicates that the request was
 * received correctly. Use <a>DescribeClusters</a> to monitor the status of the deletion. The delete operation cannot be
 * canceled or reverted once submitted. For more information about managing clusters, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you want to shut down the cluster and retain it for future use, set <i>SkipFinalClusterSnapshot</i> to
 * <code>false</code> and specify a name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this snapshot to
 * resume using the cluster. If a final cluster snapshot is requested, the status of the cluster will be "final-snapshot"
 * while the snapshot is being taken, then it's "deleting" once Amazon Redshift begins deleting the cluster.
 *
 * </p
 *
 * For more information about managing clusters, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 */
DeleteClusterResponse * RedshiftClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified Amazon Redshift parameter
 *
 * group> <note>
 *
 * You cannot delete a parameter group if it is associated with a
 */
DeleteClusterParameterGroupResponse * RedshiftClient::deleteClusterParameterGroup(const DeleteClusterParameterGroupRequest &request)
{
    return qobject_cast<DeleteClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteClusterSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Redshift security
 *
 * group> <note>
 *
 * You cannot delete a security group that is associated with any clusters. You cannot delete the default security
 *
 * group> </note>
 *
 * For information about managing security groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster
 * Security Groups</a> in the <i>Amazon Redshift Cluster Management
 */
DeleteClusterSecurityGroupResponse * RedshiftClient::deleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest &request)
{
    return qobject_cast<DeleteClusterSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified manual snapshot. The snapshot must be in the <code>available</code> state, with no other users
 * authorized to access the snapshot.
 *
 * </p
 *
 * Unlike automated snapshots, manual snapshots are retained even after you delete your cluster. Amazon Redshift does not
 * delete your manual snapshots. You must delete manual snapshot explicitly to avoid getting charged. If other accounts are
 * authorized to access the snapshot, you must revoke all of the authorizations before you can delete the
 */
DeleteClusterSnapshotResponse * RedshiftClient::deleteClusterSnapshot(const DeleteClusterSnapshotRequest &request)
{
    return qobject_cast<DeleteClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteClusterSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified cluster subnet
 */
DeleteClusterSubnetGroupResponse * RedshiftClient::deleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest &request)
{
    return qobject_cast<DeleteClusterSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Redshift event notification
 */
DeleteEventSubscriptionResponse * RedshiftClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteHsmClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified HSM client
 */
DeleteHsmClientCertificateResponse * RedshiftClient::deleteHsmClientCertificate(const DeleteHsmClientCertificateRequest &request)
{
    return qobject_cast<DeleteHsmClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteHsmConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Redshift HSM
 */
DeleteHsmConfigurationResponse * RedshiftClient::deleteHsmConfiguration(const DeleteHsmConfigurationRequest &request)
{
    return qobject_cast<DeleteHsmConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteSnapshotCopyGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified snapshot copy
 */
DeleteSnapshotCopyGrantResponse * RedshiftClient::deleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest &request)
{
    return qobject_cast<DeleteSnapshotCopyGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteSnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a snapshot
 */
DeleteSnapshotScheduleResponse * RedshiftClient::deleteSnapshotSchedule(const DeleteSnapshotScheduleRequest &request)
{
    return qobject_cast<DeleteSnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a tag or tags from a resource. You must provide the ARN of the resource from which you want to delete the tag or
 */
DeleteTagsResponse * RedshiftClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of attributes attached to an
 */
DescribeAccountAttributesResponse * RedshiftClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterDbRevisionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>ClusterDbRevision</code>
 */
DescribeClusterDbRevisionsResponse * RedshiftClient::describeClusterDbRevisions(const DescribeClusterDbRevisionsRequest &request)
{
    return qobject_cast<DescribeClusterDbRevisionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Amazon Redshift parameter groups, including parameter groups you created and the default parameter
 * group. For each parameter group, the response includes the parameter group name, description, and parameter group family
 * name. You can optionally specify a name to retrieve the description of a specific parameter
 *
 * group>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all parameter groups that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all parameter groups
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, parameter groups are returned regardless of whether they have
 * tag keys or values associated with
 */
DescribeClusterParameterGroupsResponse * RedshiftClient::describeClusterParameterGroups(const DescribeClusterParameterGroupsRequest &request)
{
    return qobject_cast<DescribeClusterParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a detailed list of parameters contained within the specified Amazon Redshift parameter group. For each parameter
 * the response includes information such as parameter name, description, data type, value, whether the parameter value is
 * modifiable, and so
 *
 * on>
 *
 * You can specify <i>source</i> filter to retrieve parameters of only specific type. For example, to retrieve parameters
 * that were modified by a user action such as from <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal
 * to
 *
 * <i>user</i>>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 */
DescribeClusterParametersResponse * RedshiftClient::describeClusterParameters(const DescribeClusterParametersRequest &request)
{
    return qobject_cast<DescribeClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about Amazon Redshift security groups. If the name of a security group is specified, the response
 * will contain only information about only that security
 *
 * group>
 *
 * For information about managing security groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster
 * Security Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all security groups that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all security groups
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, security groups are returned regardless of whether they have
 * tag keys or values associated with
 */
DescribeClusterSecurityGroupsResponse * RedshiftClient::describeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeClusterSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns one or more snapshot objects, which contain metadata about your cluster snapshots. By default, this operation
 * returns information about all snapshots of all clusters that are owned by you AWS customer account. No information is
 * returned for snapshots owned by inactive AWS customer
 *
 * accounts>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all snapshots that match any
 * combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code>
 * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all snapshots that have any combination of
 * those values are returned. Only snapshots that you own are returned in the response; shared snapshots are not returned
 * with the tag key and tag value request
 *
 * parameters>
 *
 * If both tag keys and values are omitted from the request, snapshots are returned regardless of whether they have tag
 * keys or values associated with
 */
DescribeClusterSnapshotsResponse * RedshiftClient::describeClusterSnapshots(const DescribeClusterSnapshotsRequest &request)
{
    return qobject_cast<DescribeClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns one or more cluster subnet group objects, which contain metadata about your cluster subnet groups. By default,
 * this operation returns information about all cluster subnet groups that are defined in you AWS
 *
 * account>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all subnet groups that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all subnet groups
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, subnet groups are returned regardless of whether they have tag
 * keys or values associated with
 */
DescribeClusterSubnetGroupsResponse * RedshiftClient::describeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeClusterSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterTracksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the available maintenance
 */
DescribeClusterTracksResponse * RedshiftClient::describeClusterTracks(const DescribeClusterTracksRequest &request)
{
    return qobject_cast<DescribeClusterTracksResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClusterVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptions of the available Amazon Redshift cluster versions. You can call this operation even before creating
 * any clusters to learn more about the Amazon Redshift versions. For more information about managing clusters, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 */
DescribeClusterVersionsResponse * RedshiftClient::describeClusterVersions(const DescribeClusterVersionsRequest &request)
{
    return qobject_cast<DescribeClusterVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns properties of provisioned clusters including general cluster properties, cluster database properties,
 * maintenance and backup properties, and security and access properties. This operation supports pagination. For more
 * information about managing clusters, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all clusters that match any
 * combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code>
 * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all clusters that have any combination of
 * those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, clusters are returned regardless of whether they have tag keys
 * or values associated with
 */
DescribeClustersResponse * RedshiftClient::describeClusters(const DescribeClustersRequest &request)
{
    return qobject_cast<DescribeClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeDefaultClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of parameter settings for the specified parameter group
 *
 * family>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 */
DescribeDefaultClusterParametersResponse * RedshiftClient::describeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest &request)
{
    return qobject_cast<DescribeDefaultClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of event categories for all event source types, or for a specified source type. For a list of the event
 * categories and source types, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon Redshift Event
 */
DescribeEventCategoriesResponse * RedshiftClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeEventSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists descriptions of all the Amazon Redshift event notification subscriptions for a customer account. If you specify a
 * subscription name, lists the description for that
 *
 * subscription>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all event notification
 * subscriptions that match any combination of the specified keys and values. For example, if you have <code>owner</code>
 * and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
 * subscriptions that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, subscriptions are returned regardless of whether they have tag
 * keys or values associated with
 */
DescribeEventSubscriptionsResponse * RedshiftClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to clusters, security groups, snapshots, and parameter groups for the past 14 days. Events
 * specific to a particular cluster, security group, snapshot or parameter group can be obtained by providing the name as a
 * parameter. By default, the past hour of events are
 */
DescribeEventsResponse * RedshiftClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeHsmClientCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified HSM client certificate. If no certificate ID is specified, returns information
 * about all the HSM certificates owned by your AWS customer
 *
 * account>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM client certificates
 * that match any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM client
 * certificates that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, HSM client certificates are returned regardless of whether
 * they have tag keys or values associated with
 */
DescribeHsmClientCertificatesResponse * RedshiftClient::describeHsmClientCertificates(const DescribeHsmClientCertificatesRequest &request)
{
    return qobject_cast<DescribeHsmClientCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeHsmConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified Amazon Redshift HSM configuration. If no configuration ID is specified, returns
 * information about all the HSM configurations owned by your AWS customer
 *
 * account>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM connections that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM connections
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, HSM connections are returned regardless of whether they have
 * tag keys or values associated with
 */
DescribeHsmConfigurationsResponse * RedshiftClient::describeHsmConfigurations(const DescribeHsmConfigurationsRequest &request)
{
    return qobject_cast<DescribeHsmConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeLoggingStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes whether information, such as queries and connection attempts, is being logged for the specified Amazon
 * Redshift
 */
DescribeLoggingStatusResponse * RedshiftClient::describeLoggingStatus(const DescribeLoggingStatusRequest &request)
{
    return qobject_cast<DescribeLoggingStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeOrderableClusterOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of orderable cluster options. Before you create a new cluster you can use this operation to find what
 * options are available, such as the EC2 Availability Zones (AZ) in the specific AWS Region that you can specify, and the
 * node types you can request. The node types differ by available storage, memory, CPU and price. With the cost involved
 * you might want to obtain a list of cluster options in the specific region and specify values when creating a cluster.
 * For more information about managing clusters, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 */
DescribeOrderableClusterOptionsResponse * RedshiftClient::describeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest &request)
{
    return qobject_cast<DescribeOrderableClusterOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeReservedNodeOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available reserved node offerings by Amazon Redshift with their descriptions including the node
 * type, the fixed and recurring costs of reserving the node and duration the node will be reserved for you. These
 * descriptions help you determine which reserve node offering you want to purchase. You then use the unique offering ID in
 * you call to <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon Redshift cluster.
 *
 * </p
 *
 * For more information about reserved node offerings, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved
 * Nodes</a> in the <i>Amazon Redshift Cluster Management
 */
DescribeReservedNodeOfferingsResponse * RedshiftClient::describeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest &request)
{
    return qobject_cast<DescribeReservedNodeOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeReservedNodesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the descriptions of the reserved
 */
DescribeReservedNodesResponse * RedshiftClient::describeReservedNodes(const DescribeReservedNodesRequest &request)
{
    return qobject_cast<DescribeReservedNodesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeResizeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the last resize operation for the specified cluster. If no resize operation has ever been
 * initiated for the specified cluster, a <code>HTTP 404</code> error is returned. If a resize operation was initiated and
 * completed, the status of the resize remains as <code>SUCCEEDED</code> until the next resize.
 *
 * </p
 *
 * A resize operation can be requested using <a>ModifyCluster</a> and specifying a different number or type of nodes for
 * the cluster.
 */
DescribeResizeResponse * RedshiftClient::describeResize(const DescribeResizeRequest &request)
{
    return qobject_cast<DescribeResizeResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeSnapshotCopyGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of snapshot copy grants owned by the AWS account in the destination
 *
 * region>
 *
 * For more information about managing snapshot copy grants, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon Redshift Database
 * Encryption</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 */
DescribeSnapshotCopyGrantsResponse * RedshiftClient::describeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest &request)
{
    return qobject_cast<DescribeSnapshotCopyGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeSnapshotSchedulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of snapshot schedules.
 */
DescribeSnapshotSchedulesResponse * RedshiftClient::describeSnapshotSchedules(const DescribeSnapshotSchedulesRequest &request)
{
    return qobject_cast<DescribeSnapshotSchedulesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the total amount of snapshot usage and provisioned storage for a user in
 */
DescribeStorageResponse * RedshiftClient::describeStorage(const DescribeStorageRequest &request)
{
    return qobject_cast<DescribeStorageResponse *>(send(request));
}

/*!
 * Sends a DescribeStorage request to the RedshiftClient service, and returns a pointer to an
 * DescribeStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the total amount of snapshot usage and provisioned storage for a user in
 */
DescribeStorageResponse * RedshiftClient::describeStorage()
{
    return describeStorage(DescribeStorageRequest());
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeTableRestoreStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of one or more table restore requests made using the <a>RestoreTableFromClusterSnapshot</a> API action.
 * If you don't specify a value for the <code>TableRestoreRequestId</code> parameter, then
 * <code>DescribeTableRestoreStatus</code> returns the status of all table restore requests ordered by the date and time of
 * the request in ascending order. Otherwise <code>DescribeTableRestoreStatus</code> returns the status of the table
 * specified by
 */
DescribeTableRestoreStatusResponse * RedshiftClient::describeTableRestoreStatus(const DescribeTableRestoreStatusRequest &request)
{
    return qobject_cast<DescribeTableRestoreStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags. You can return tags from a specific resource by specifying an ARN, or you can return all tags
 * for a given type of resource, such as clusters, snapshots, and so
 *
 * on>
 *
 * The following are limitations for <code>DescribeTags</code>:
 *
 * </p <ul> <li>
 *
 * You cannot specify an ARN and a resource-type value together in the same
 *
 * request> </li> <li>
 *
 * You cannot use the <code>MaxRecords</code> and <code>Marker</code> parameters together with the ARN
 *
 * parameter> </li> <li>
 *
 * The <code>MaxRecords</code> parameter can be a range from 10 to 50 results to return in a
 *
 * request> </li> </ul>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all resources that match any
 * combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code>
 * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all resources that have any combination of
 * those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, resources are returned regardless of whether they have tag
 * keys or values associated with
 */
DescribeTagsResponse * RedshiftClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DisableLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops logging information, such as queries and connection attempts, for the specified Amazon Redshift
 */
DisableLoggingResponse * RedshiftClient::disableLogging(const DisableLoggingRequest &request)
{
    return qobject_cast<DisableLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * DisableSnapshotCopyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the automatic copying of snapshots from one region to another region for a specified
 *
 * cluster>
 *
 * If your cluster and its snapshots are encrypted using a customer master key (CMK) from AWS KMS, use
 * <a>DeleteSnapshotCopyGrant</a> to delete the grant that grants Amazon Redshift permission to the CMK in the destination
 * region.
 */
DisableSnapshotCopyResponse * RedshiftClient::disableSnapshotCopy(const DisableSnapshotCopyRequest &request)
{
    return qobject_cast<DisableSnapshotCopyResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * EnableLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts logging information, such as queries and connection attempts, for the specified Amazon Redshift
 */
EnableLoggingResponse * RedshiftClient::enableLogging(const EnableLoggingRequest &request)
{
    return qobject_cast<EnableLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * EnableSnapshotCopyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the automatic copy of snapshots from one region to another region for a specified
 */
EnableSnapshotCopyResponse * RedshiftClient::enableSnapshotCopy(const EnableSnapshotCopyRequest &request)
{
    return qobject_cast<EnableSnapshotCopyResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * GetClusterCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a database user name and temporary password with temporary authorization to log on to an Amazon Redshift
 * database. The action returns the database user name prefixed with <code>IAM:</code> if <code>AutoCreate</code> is
 * <code>False</code> or <code>IAMA:</code> if <code>AutoCreate</code> is <code>True</code>. You can optionally specify one
 * or more database user groups that the user will join at log on. By default, the temporary credentials expire in 900
 * seconds. You can optionally specify a duration between 900 seconds (15 minutes) and 3600 seconds (60 minutes). For more
 * information, see <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/generating-user-credentials.html">Using IAM
 * Authentication to Generate Database User Credentials</a> in the Amazon Redshift Cluster Management
 *
 * Guide>
 *
 * The AWS Identity and Access Management (IAM)user or role that executes GetClusterCredentials must have an IAM policy
 * attached that allows access to all necessary actions and resources. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html#redshift-policy-resources.getclustercredentials-resources">Resource
 * Policies for GetClusterCredentials</a> in the Amazon Redshift Cluster Management
 *
 * Guide>
 *
 * If the <code>DbGroups</code> parameter is specified, the IAM policy must allow the <code>redshift:JoinGroup</code>
 * action with access to the listed <code>dbgroups</code>.
 *
 * </p
 *
 * In addition, if the <code>AutoCreate</code> parameter is set to <code>True</code>, then the policy must include the
 * <code>redshift:CreateClusterUser</code>
 *
 * privilege>
 *
 * If the <code>DbName</code> parameter is specified, the IAM policy must allow access to the resource <code>dbname</code>
 * for the specified database name.
 */
GetClusterCredentialsResponse * RedshiftClient::getClusterCredentials(const GetClusterCredentialsRequest &request)
{
    return qobject_cast<GetClusterCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * GetReservedNodeExchangeOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of DC2 ReservedNodeOfferings that matches the payment type, term, and usage price of the given DC1
 * reserved
 */
GetReservedNodeExchangeOfferingsResponse * RedshiftClient::getReservedNodeExchangeOfferings(const GetReservedNodeExchangeOfferingsRequest &request)
{
    return qobject_cast<GetReservedNodeExchangeOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a cluster. For example, you can add another security or parameter group, update the preferred
 * maintenance window, or change the master user password. Resetting a cluster password or modifying the security groups
 * associated with a cluster do not need a reboot. However, modifying a parameter group requires a reboot for parameters to
 * take effect. For more information about managing clusters, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * You can also change node type and the number of nodes to scale up or down the cluster. When resizing a cluster, you must
 * specify both the number of nodes and the node type even if one of the parameters does not
 */
ModifyClusterResponse * RedshiftClient::modifyCluster(const ModifyClusterRequest &request)
{
    return qobject_cast<ModifyClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterDbRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the database revision of a cluster. The database revision is a unique revision of the database running in a
 */
ModifyClusterDbRevisionResponse * RedshiftClient::modifyClusterDbRevision(const ModifyClusterDbRevisionRequest &request)
{
    return qobject_cast<ModifyClusterDbRevisionResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterIamRolesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the list of AWS Identity and Access Management (IAM) roles that can be used by the cluster to access other AWS
 *
 * services>
 *
 * A cluster can have up to 10 IAM roles associated at any
 */
ModifyClusterIamRolesResponse * RedshiftClient::modifyClusterIamRoles(const ModifyClusterIamRolesRequest &request)
{
    return qobject_cast<ModifyClusterIamRolesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterMaintenanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the maintenance settings of a cluster. For example, you can defer a maintenance window. You can also update or
 * cancel a deferment.
 */
ModifyClusterMaintenanceResponse * RedshiftClient::modifyClusterMaintenance(const ModifyClusterMaintenanceRequest &request)
{
    return qobject_cast<ModifyClusterMaintenanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a parameter
 *
 * group>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 */
ModifyClusterParameterGroupResponse * RedshiftClient::modifyClusterParameterGroup(const ModifyClusterParameterGroupRequest &request)
{
    return qobject_cast<ModifyClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a
 */
ModifyClusterSnapshotResponse * RedshiftClient::modifyClusterSnapshot(const ModifyClusterSnapshotRequest &request)
{
    return qobject_cast<ModifyClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterSnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a snapshot schedule for a
 */
ModifyClusterSnapshotScheduleResponse * RedshiftClient::modifyClusterSnapshotSchedule(const ModifyClusterSnapshotScheduleRequest &request)
{
    return qobject_cast<ModifyClusterSnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyClusterSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a cluster subnet group to include the specified list of VPC subnets. The operation replaces the existing list
 * of subnets with the new list of
 */
ModifyClusterSubnetGroupResponse * RedshiftClient::modifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest &request)
{
    return qobject_cast<ModifyClusterSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing Amazon Redshift event notification
 */
ModifyEventSubscriptionResponse * RedshiftClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifySnapshotCopyRetentionPeriodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the number of days to retain snapshots in the destination AWS Region after they are copied from the source AWS
 * Region. By default, this operation only changes the retention period of copied automated snapshots. The retention
 * periods for both new and existing copied automated snapshots are updated with the new retention period. You can set the
 * manual option to change only the retention periods of copied manual snapshots. If you set this option, only newly copied
 * manual snapshots have the new retention period.
 */
ModifySnapshotCopyRetentionPeriodResponse * RedshiftClient::modifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest &request)
{
    return qobject_cast<ModifySnapshotCopyRetentionPeriodResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ModifySnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a snapshot schedule. Any schedule associated with a cluster is modified
 */
ModifySnapshotScheduleResponse * RedshiftClient::modifySnapshotSchedule(const ModifySnapshotScheduleRequest &request)
{
    return qobject_cast<ModifySnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * PurchaseReservedNodeOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to purchase reserved nodes. Amazon Redshift offers a predefined set of reserved node offerings. You can
 * purchase one or more of the offerings. You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the available
 * reserved node offerings. You can call this API by providing a specific reserved node offering and the number of nodes
 * you want to reserve.
 *
 * </p
 *
 * For more information about reserved node offerings, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved
 * Nodes</a> in the <i>Amazon Redshift Cluster Management
 */
PurchaseReservedNodeOfferingResponse * RedshiftClient::purchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest &request)
{
    return qobject_cast<PurchaseReservedNodeOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * RebootClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reboots a cluster. This action is taken as soon as possible. It results in a momentary outage to the cluster, during
 * which the cluster status is set to <code>rebooting</code>. A cluster event is created when the reboot is completed. Any
 * pending cluster modifications (see <a>ModifyCluster</a>) are applied at this reboot. For more information about managing
 * clusters, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift
 * Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 */
RebootClusterResponse * RedshiftClient::rebootCluster(const RebootClusterRequest &request)
{
    return qobject_cast<RebootClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ResetClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets one or more parameters of the specified parameter group to their default values and sets the source values of the
 * parameters to "engine-default". To reset the entire parameter group specify the <i>ResetAllParameters</i> parameter. For
 * parameter changes to take effect you must reboot any associated clusters.
 */
ResetClusterParameterGroupResponse * RedshiftClient::resetClusterParameterGroup(const ResetClusterParameterGroupRequest &request)
{
    return qobject_cast<ResetClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * ResizeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the size of the cluster. You can change the cluster's type, or change the number or type of nodes. The default
 * behavior is to use the elastic resize method. With an elastic resize, your cluster is available for read and write
 * operations more quickly than with the classic resize method.
 *
 * </p
 *
 * Elastic resize operations have the following
 *
 * restrictions> <ul> <li>
 *
 * You can only resize clusters of the following
 *
 * types> <ul> <li>
 *
 * dc2.larg> </li> <li>
 *
 * dc2.8xlarg> </li> <li>
 *
 * ds2.xlarg> </li> <li>
 *
 * ds2.8xlarg> </li> </ul> </li> <li>
 *
 * The type of nodes that you add must match the node type for the
 */
ResizeClusterResponse * RedshiftClient::resizeCluster(const ResizeClusterRequest &request)
{
    return qobject_cast<ResizeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * RestoreFromClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cluster from a snapshot. By default, Amazon Redshift creates the resulting cluster with the same
 * configuration as the original cluster from which the snapshot was created, except that the new cluster is created with
 * the default cluster security and parameter groups. After Amazon Redshift creates the cluster, you can use the
 * <a>ModifyCluster</a> API to associate a different security group and different parameter group with the restored
 * cluster. If you are using a DS node type, you can also choose to change to another DS node type of the same size during
 *
 * restore>
 *
 * If you restore a cluster into a VPC, you must provide a cluster subnet group where you want the cluster
 *
 * restored>
 *
 * For more information about working with snapshots, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 */
RestoreFromClusterSnapshotResponse * RedshiftClient::restoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest &request)
{
    return qobject_cast<RestoreFromClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * RestoreTableFromClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new table from a table in an Amazon Redshift cluster snapshot. You must create the new table within the Amazon
 * Redshift cluster that the snapshot was taken
 *
 * from>
 *
 * You cannot use <code>RestoreTableFromClusterSnapshot</code> to restore a table with the same name as an existing table
 * in an Amazon Redshift cluster. That is, you cannot overwrite an existing table in a cluster with a restored table. If
 * you want to replace your original table with a new, restored table, then rename or drop your original table before you
 * call <code>RestoreTableFromClusterSnapshot</code>. When you have renamed your original table, then you can pass the
 * original name of the table as the <code>NewTableName</code> parameter value in the call to
 * <code>RestoreTableFromClusterSnapshot</code>. This way, you can replace the original table with the table created from
 * the
 */
RestoreTableFromClusterSnapshotResponse * RedshiftClient::restoreTableFromClusterSnapshot(const RestoreTableFromClusterSnapshotRequest &request)
{
    return qobject_cast<RestoreTableFromClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * RevokeClusterSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes an ingress rule in an Amazon Redshift security group for a previously authorized IP range or Amazon EC2 security
 * group. To add an ingress rule, see <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing security
 * groups, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
 * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 */
RevokeClusterSecurityGroupIngressResponse * RedshiftClient::revokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest &request)
{
    return qobject_cast<RevokeClusterSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * RevokeSnapshotAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the ability of the specified AWS customer account to restore the specified snapshot. If the account is currently
 * restoring the snapshot, the restore will run to
 *
 * completion>
 *
 * For more information about working with snapshots, go to <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 */
RevokeSnapshotAccessResponse * RedshiftClient::revokeSnapshotAccess(const RevokeSnapshotAccessRequest &request)
{
    return qobject_cast<RevokeSnapshotAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftClient service, and returns a pointer to an
 * RotateEncryptionKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rotates the encryption keys for a
 */
RotateEncryptionKeyResponse * RedshiftClient::rotateEncryptionKey(const RotateEncryptionKeyRequest &request)
{
    return qobject_cast<RotateEncryptionKeyResponse *>(send(request));
}

/*!
 * \class QtAws::Redshift::RedshiftClientPrivate
 * \brief The RedshiftClientPrivate class provides private implementation for RedshiftClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a RedshiftClientPrivate object with public implementation \a q.
 */
RedshiftClientPrivate::RedshiftClientPrivate(RedshiftClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Redshift
} // namespace QtAws

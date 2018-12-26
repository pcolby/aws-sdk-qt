/*
    Copyright 2013-2018 Paul Colby

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

#include "eksclient.h"
#include "eksclient_p.h"

#include "core/awssignaturev4.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "describeupdaterequest.h"
#include "describeupdateresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listupdatesrequest.h"
#include "listupdatesresponse.h"
#include "updateclusterversionrequest.h"
#include "updateclusterversionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::EKS
 * \brief Contains classess for accessing Amazon Elastic Container Service for Kubernetes ( EKS).
 *
 * \inmodule QtAwsEks
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::EksClient
 * \brief The EksClient class provides access to the Amazon Elastic Container Service for Kubernetes ( EKS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Container Service for Kubernetes (Amazon EKS) is a managed service that makes it easy for you to run
 *  Kubernetes on AWS without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 */

/*!
 * \brief Constructs a EksClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EksClient::EksClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EksClientPrivate(this), parent)
{
    Q_D(EksClient);
    d->apiVersion = QStringLiteral("2017-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("eks");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic Container Service for Kubernetes");
    d->serviceName = QStringLiteral("eks");
}

/*!
 * \overload EksClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EksClient::EksClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EksClientPrivate(this), parent)
{
    Q_D(EksClient);
    d->apiVersion = QStringLiteral("2017-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("eks");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic Container Service for Kubernetes");
    d->serviceName = QStringLiteral("eks");
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon EKS control plane.
 *
 * </p
 *
 * The Amazon EKS control plane consists of control plane instances that run the Kubernetes software, like
 * <code>etcd</code> and the API server. The control plane runs in an account managed by AWS, and the Kubernetes API is
 * exposed via the Amazon EKS API server
 *
 * endpoint>
 *
 * Amazon EKS worker nodes run in your AWS account and connect to your cluster's control plane via the Kubernetes API
 * server endpoint and a certificate file that is created for your
 *
 * cluster>
 *
 * The cluster control plane is provisioned across multiple Availability Zones and fronted by an Elastic Load Balancing
 * Network Load Balancer. Amazon EKS also provisions elastic network interfaces in your VPC subnets to provide connectivity
 * from the control plane instances to the worker nodes (for example, to support <code>kubectl exec</code>,
 * <code>logs</code>, and <code>proxy</code> data
 *
 * flows)>
 *
 * After you create an Amazon EKS cluster, you must configure your Kubernetes tooling to communicate with the API server
 * and launch worker nodes into your cluster. For more information, see <a
 * href="http://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing Cluster Authentication</a> and <a
 * href="http://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching Amazon EKS Worker Nodes</a>in the
 * <i>Amazon EKS User
 */
CreateClusterResponse * EksClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon EKS cluster control plane.
 *
 * </p <note>
 *
 * If you have active services in your cluster that are associated with a load balancer, you must delete those services
 * before deleting the cluster so that the load balancers are deleted properly. Otherwise, you can have orphaned resources
 * in your VPC that prevent you from being able to delete the VPC. For more information, see <a
 * href="http://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting a Cluster</a> in the <i>Amazon EKS
 * User
 */
DeleteClusterResponse * EksClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptive information about an Amazon EKS
 *
 * cluster>
 *
 * The API server endpoint and certificate authority data returned by this operation are required for <code>kubelet</code>
 * and <code>kubectl</code> to communicate with your Kubernetes API server. For more information, see <a
 * href="http://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create a kubeconfig for Amazon
 *
 * EKS</a>> <note>
 *
 * The API server endpoint and certificate authority data are not available until the cluster reaches the
 * <code>ACTIVE</code>
 */
DescribeClusterResponse * EksClient::describeCluster(const DescribeClusterRequest &request)
{
    return qobject_cast<DescribeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptive information about an update against your Amazon EKS
 *
 * cluster>
 *
 * When the status of the update is <code>Succeeded</code>, the update is complete. If an update fails, the status is
 * <code>Failed</code>, and an error detail explains the reason for the
 */
DescribeUpdateResponse * EksClient::describeUpdate(const DescribeUpdateRequest &request)
{
    return qobject_cast<DescribeUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon EKS clusters in your AWS account in the specified
 */
ListClustersResponse * EksClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the updates associated with an Amazon EKS cluster in your AWS account, in the specified
 */
ListUpdatesResponse * EksClient::listUpdates(const ListUpdatesRequest &request)
{
    return qobject_cast<ListUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * UpdateClusterVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon EKS cluster to the specified Kubernetes version. Your cluster continues to function during the update.
 * The response output includes an update ID that you can use to track the status of your cluster update with the
 * <a>DescribeUpdate</a> API
 *
 * operation>
 *
 * Cluster updates are asynchronous, and they should finish within a few minutes. During an update, the cluster status
 * moves to <code>UPDATING</code> (this status transition is eventually consistent). When the update is complete (either
 * <code>Failed</code> or <code>Successful</code>), the cluster status moves to
 */
UpdateClusterVersionResponse * EksClient::updateClusterVersion(const UpdateClusterVersionRequest &request)
{
    return qobject_cast<UpdateClusterVersionResponse *>(send(request));
}

/*!
 * \class QtAws::EKS::EksClientPrivate
 * \brief The EksClientPrivate class provides private implementation for EksClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a EksClientPrivate object with public implementation \a q.
 */
EksClientPrivate::EksClientPrivate(EksClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace EKS
} // namespace QtAws

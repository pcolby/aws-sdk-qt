/*
    Copyright 2013-2021 Paul Colby

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

#include "emrcontainersclient.h"
#include "emrcontainersclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrunrequest.h"
#include "canceljobrunresponse.h"
#include "createmanagedendpointrequest.h"
#include "createmanagedendpointresponse.h"
#include "createvirtualclusterrequest.h"
#include "createvirtualclusterresponse.h"
#include "deletemanagedendpointrequest.h"
#include "deletemanagedendpointresponse.h"
#include "deletevirtualclusterrequest.h"
#include "deletevirtualclusterresponse.h"
#include "describejobrunrequest.h"
#include "describejobrunresponse.h"
#include "describemanagedendpointrequest.h"
#include "describemanagedendpointresponse.h"
#include "describevirtualclusterrequest.h"
#include "describevirtualclusterresponse.h"
#include "listjobrunsrequest.h"
#include "listjobrunsresponse.h"
#include "listmanagedendpointsrequest.h"
#include "listmanagedendpointsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listvirtualclustersrequest.h"
#include "listvirtualclustersresponse.h"
#include "startjobrunrequest.h"
#include "startjobrunresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Emrcontainers
 * \brief Contains classess for accessing Amazon EMR Containers.
 *
 * \inmodule QtAwsEmrcontainers
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::EmrcontainersClient
 * \brief The EmrcontainersClient class provides access to the Amazon EMR Containers service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEmrcontainers
 *
 *  Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you to run open-source big data frameworks on
 *  Amazon Elastic Kubernetes Service (Amazon EKS). With this deployment option, you can focus on running analytics
 *  workloads while Amazon EMR on EKS builds, configures, and manages containers for open-source applications. For more
 *  information about Amazon EMR on EKS concepts and tasks, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What is Amazon EMR on
 * 
 *  EKS</a>>
 * 
 *  <i>Amazon EMR containers</i> is the API name for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in
 *  the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR on EKS. For example, <code>aws emr-containers
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR on EKS. For example, <code>"Action": [
 *  "emr-containers:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR on
 * 
 *  EKS</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR on EKS service endpoints. For example,
 *  <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
 *  EMR on EKS Service
 */

/*!
 * \brief Constructs a EmrcontainersClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EmrcontainersClient::EmrcontainersClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EmrcontainersClientPrivate(this), parent)
{
    Q_D(EmrcontainersClient);
    d->apiVersion = QStringLiteral("2020-10-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("emr-containers");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon EMR Containers");
    d->serviceName = QStringLiteral("emr-containers");
}

/*!
 * \overload EmrcontainersClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EmrcontainersClient::EmrcontainersClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EmrcontainersClientPrivate(this), parent)
{
    Q_D(EmrcontainersClient);
    d->apiVersion = QStringLiteral("2020-10-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("emr-containers");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon EMR Containers");
    d->serviceName = QStringLiteral("emr-containers");
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * CancelJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a job run. A job run is a unit of work, such as a Spark jar, PySpark script, or SparkSQL query, that you submit
 * to Amazon EMR on
 */
CancelJobRunResponse * EmrcontainersClient::cancelJobRun(const CancelJobRunRequest &request)
{
    return qobject_cast<CancelJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * CreateManagedEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a managed endpoint. A managed endpoint is a gateway that connects EMR Studio to Amazon EMR on EKS so that EMR
 * Studio can communicate with your virtual
 */
CreateManagedEndpointResponse * EmrcontainersClient::createManagedEndpoint(const CreateManagedEndpointRequest &request)
{
    return qobject_cast<CreateManagedEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * CreateVirtualClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a virtual cluster. Virtual cluster is a managed entity on Amazon EMR on EKS. You can create, describe, list and
 * delete virtual clusters. They do not consume any additional resource in your system. A single virtual cluster maps to a
 * single Kubernetes namespace. Given this relationship, you can model virtual clusters the same way you model Kubernetes
 * namespaces to meet your
 */
CreateVirtualClusterResponse * EmrcontainersClient::createVirtualCluster(const CreateVirtualClusterRequest &request)
{
    return qobject_cast<CreateVirtualClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * DeleteManagedEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a managed endpoint. A managed endpoint is a gateway that connects EMR Studio to Amazon EMR on EKS so that EMR
 * Studio can communicate with your virtual
 */
DeleteManagedEndpointResponse * EmrcontainersClient::deleteManagedEndpoint(const DeleteManagedEndpointRequest &request)
{
    return qobject_cast<DeleteManagedEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * DeleteVirtualClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a virtual cluster. Virtual cluster is a managed entity on Amazon EMR on EKS. You can create, describe, list and
 * delete virtual clusters. They do not consume any additional resource in your system. A single virtual cluster maps to a
 * single Kubernetes namespace. Given this relationship, you can model virtual clusters the same way you model Kubernetes
 * namespaces to meet your
 */
DeleteVirtualClusterResponse * EmrcontainersClient::deleteVirtualCluster(const DeleteVirtualClusterRequest &request)
{
    return qobject_cast<DeleteVirtualClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * DescribeJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays detailed information about a job run. A job run is a unit of work, such as a Spark jar, PySpark script, or
 * SparkSQL query, that you submit to Amazon EMR on
 */
DescribeJobRunResponse * EmrcontainersClient::describeJobRun(const DescribeJobRunRequest &request)
{
    return qobject_cast<DescribeJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * DescribeManagedEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays detailed information about a managed endpoint. A managed endpoint is a gateway that connects EMR Studio to
 * Amazon EMR on EKS so that EMR Studio can communicate with your virtual
 */
DescribeManagedEndpointResponse * EmrcontainersClient::describeManagedEndpoint(const DescribeManagedEndpointRequest &request)
{
    return qobject_cast<DescribeManagedEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * DescribeVirtualClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays detailed information about a specified virtual cluster. Virtual cluster is a managed entity on Amazon EMR on
 * EKS. You can create, describe, list and delete virtual clusters. They do not consume any additional resource in your
 * system. A single virtual cluster maps to a single Kubernetes namespace. Given this relationship, you can model virtual
 * clusters the same way you model Kubernetes namespaces to meet your
 */
DescribeVirtualClusterResponse * EmrcontainersClient::describeVirtualCluster(const DescribeVirtualClusterRequest &request)
{
    return qobject_cast<DescribeVirtualClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * ListJobRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists job runs based on a set of parameters. A job run is a unit of work, such as a Spark jar, PySpark script, or
 * SparkSQL query, that you submit to Amazon EMR on
 */
ListJobRunsResponse * EmrcontainersClient::listJobRuns(const ListJobRunsRequest &request)
{
    return qobject_cast<ListJobRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * ListManagedEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists managed endpoints based on a set of parameters. A managed endpoint is a gateway that connects EMR Studio to Amazon
 * EMR on EKS so that EMR Studio can communicate with your virtual
 */
ListManagedEndpointsResponse * EmrcontainersClient::listManagedEndpoints(const ListManagedEndpointsRequest &request)
{
    return qobject_cast<ListManagedEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags assigned to the
 */
ListTagsForResourceResponse * EmrcontainersClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * ListVirtualClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about the specified virtual cluster. Virtual cluster is a managed entity on Amazon EMR on EKS. You can
 * create, describe, list and delete virtual clusters. They do not consume any additional resource in your system. A single
 * virtual cluster maps to a single Kubernetes namespace. Given this relationship, you can model virtual clusters the same
 * way you model Kubernetes namespaces to meet your
 */
ListVirtualClustersResponse * EmrcontainersClient::listVirtualClusters(const ListVirtualClustersRequest &request)
{
    return qobject_cast<ListVirtualClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * StartJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job run. A job run is a unit of work, such as a Spark jar, PySpark script, or SparkSQL query, that you submit
 * to Amazon EMR on
 */
StartJobRunResponse * EmrcontainersClient::startJobRun(const StartJobRunRequest &request)
{
    return qobject_cast<StartJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns tags to resources. A tag is a label that you assign to an AWS resource. Each tag consists of a key and an
 * optional value, both of which you define. Tags enable you to categorize your AWS resources by attributes such as
 * purpose, owner, or environment. When you have many resources of the same type, you can quickly identify a specific
 * resource based on the tags you've assigned to it. For example, you can define a set of tags for your Amazon EMR on EKS
 * clusters to help you track each cluster's owner and stack level. We recommend that you devise a consistent set of tag
 * keys for each resource type. You can then search and filter the resources based on the tags that you
 */
TagResourceResponse * EmrcontainersClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrcontainersClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from
 */
UntagResourceResponse * EmrcontainersClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::Emrcontainers::EmrcontainersClientPrivate
 * \brief The EmrcontainersClientPrivate class provides private implementation for EmrcontainersClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a EmrcontainersClientPrivate object with public implementation \a q.
 */
EmrcontainersClientPrivate::EmrcontainersClientPrivate(EmrcontainersClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Emrcontainers
} // namespace QtAws

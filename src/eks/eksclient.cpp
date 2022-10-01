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

#include "eksclient.h"
#include "eksclient_p.h"

#include "core/awssignaturev4.h"
#include "associateencryptionconfigrequest.h"
#include "associateencryptionconfigresponse.h"
#include "associateidentityproviderconfigrequest.h"
#include "associateidentityproviderconfigresponse.h"
#include "createaddonrequest.h"
#include "createaddonresponse.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createfargateprofilerequest.h"
#include "createfargateprofileresponse.h"
#include "createnodegrouprequest.h"
#include "createnodegroupresponse.h"
#include "deleteaddonrequest.h"
#include "deleteaddonresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deletefargateprofilerequest.h"
#include "deletefargateprofileresponse.h"
#include "deletenodegrouprequest.h"
#include "deletenodegroupresponse.h"
#include "deregisterclusterrequest.h"
#include "deregisterclusterresponse.h"
#include "describeaddonrequest.h"
#include "describeaddonresponse.h"
#include "describeaddonversionsrequest.h"
#include "describeaddonversionsresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "describefargateprofilerequest.h"
#include "describefargateprofileresponse.h"
#include "describeidentityproviderconfigrequest.h"
#include "describeidentityproviderconfigresponse.h"
#include "describenodegrouprequest.h"
#include "describenodegroupresponse.h"
#include "describeupdaterequest.h"
#include "describeupdateresponse.h"
#include "disassociateidentityproviderconfigrequest.h"
#include "disassociateidentityproviderconfigresponse.h"
#include "listaddonsrequest.h"
#include "listaddonsresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listfargateprofilesrequest.h"
#include "listfargateprofilesresponse.h"
#include "listidentityproviderconfigsrequest.h"
#include "listidentityproviderconfigsresponse.h"
#include "listnodegroupsrequest.h"
#include "listnodegroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listupdatesrequest.h"
#include "listupdatesresponse.h"
#include "registerclusterrequest.h"
#include "registerclusterresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaddonrequest.h"
#include "updateaddonresponse.h"
#include "updateclusterconfigrequest.h"
#include "updateclusterconfigresponse.h"
#include "updateclusterversionrequest.h"
#include "updateclusterversionresponse.h"
#include "updatenodegroupconfigrequest.h"
#include "updatenodegroupconfigresponse.h"
#include "updatenodegroupversionrequest.h"
#include "updatenodegroupversionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Eks
 * \brief Contains classess for accessing Amazon Elastic Kubernetes Service.
 *
 * \inmodule QtAwsEks
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::EksClient
 * \brief The EksClient class provides access to the Amazon Elastic Kubernetes Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEks
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on
 *  Amazon Web Services without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
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
    d->serviceFullName = QStringLiteral("Amazon Elastic Kubernetes Service");
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
    d->serviceFullName = QStringLiteral("Amazon Elastic Kubernetes Service");
    d->serviceName = QStringLiteral("eks");
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * AssociateEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate encryption configuration to an existing
 *
 * cluster>
 *
 * You can use this API to enable encryption on existing clusters which do not have encryption already enabled. This allows
 * you to implement a defense-in-depth security strategy without migrating applications to new Amazon EKS
 */
AssociateEncryptionConfigResponse * EksClient::associateEncryptionConfig(const AssociateEncryptionConfigRequest &request)
{
    return qobject_cast<AssociateEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * AssociateIdentityProviderConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate an identity provider configuration to a
 *
 * cluster>
 *
 * If you want to authenticate identities using an identity provider, you can create an identity provider configuration and
 * associate it to your cluster. After configuring authentication to your cluster you can create Kubernetes
 * <code>roles</code> and <code>clusterroles</code> to assign permissions to the roles, and then bind the roles to the
 * identities using Kubernetes <code>rolebindings</code> and <code>clusterrolebindings</code>. For more information see <a
 * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC Authorization</a> in the Kubernetes
 */
AssociateIdentityProviderConfigResponse * EksClient::associateIdentityProviderConfig(const AssociateIdentityProviderConfigRequest &request)
{
    return qobject_cast<AssociateIdentityProviderConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * CreateAddonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon EKS
 *
 * add-on>
 *
 * Amazon EKS add-ons help to automate the provisioning and lifecycle management of common operational software for Amazon
 * EKS clusters. Amazon EKS add-ons require clusters running version 1.18 or later because Amazon EKS add-ons rely on the
 * Server-side Apply Kubernetes feature, which is only available in Kubernetes 1.18 and later. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-add-ons.html">Amazon EKS add-ons</a> in the <i>Amazon EKS
 * User
 */
CreateAddonResponse * EksClient::createAddon(const CreateAddonRequest &request)
{
    return qobject_cast<CreateAddonResponse *>(send(request));
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
 * The Amazon EKS control plane consists of control plane instances that run the Kubernetes software, such as
 * <code>etcd</code> and the API server. The control plane runs in an account managed by Amazon Web Services, and the
 * Kubernetes API is exposed by the Amazon EKS API server endpoint. Each Amazon EKS cluster control plane is single tenant
 * and unique. It runs on its own set of Amazon EC2
 *
 * instances>
 *
 * The cluster control plane is provisioned across multiple Availability Zones and fronted by an Elastic Load Balancing
 * Network Load Balancer. Amazon EKS also provisions elastic network interfaces in your VPC subnets to provide connectivity
 * from the control plane instances to the nodes (for example, to support <code>kubectl exec</code>, <code>logs</code>, and
 * <code>proxy</code> data
 *
 * flows)>
 *
 * Amazon EKS nodes run in your Amazon Web Services account and connect to your cluster's control plane over the Kubernetes
 * API server endpoint and a certificate file that is created for your
 *
 * cluster>
 *
 * In most cases, it takes several minutes to create a cluster. After you create an Amazon EKS cluster, you must configure
 * your Kubernetes tooling to communicate with the API server and launch nodes into your cluster. For more information, see
 * <a href="https://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing Cluster Authentication</a> and <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching Amazon EKS nodes</a> in the
 * <i>Amazon EKS User
 */
CreateClusterResponse * EksClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * CreateFargateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Fargate profile for your Amazon EKS cluster. You must have at least one Fargate profile in a cluster to be
 * able to run pods on
 *
 * Fargate>
 *
 * The Fargate profile allows an administrator to declare which pods run on Fargate and specify which pods run on which
 * Fargate profile. This declaration is done through the profile’s selectors. Each profile can have up to five selectors
 * that contain a namespace and labels. A namespace is required for every selector. The label field consists of multiple
 * optional key-value pairs. Pods that match the selectors are scheduled on Fargate. If a to-be-scheduled pod matches any
 * of the selectors in the Fargate profile, then that pod is run on
 *
 * Fargate>
 *
 * When you create a Fargate profile, you must specify a pod execution role to use with the pods that are scheduled with
 * the profile. This role is added to the cluster's Kubernetes <a
 * href="https://kubernetes.io/docs/admin/authorization/rbac/">Role Based Access Control</a> (RBAC) for authorization so
 * that the <code>kubelet</code> that is running on the Fargate infrastructure can register with your Amazon EKS cluster so
 * that it can appear in your cluster as a node. The pod execution role also provides IAM permissions to the Fargate
 * infrastructure to allow read access to Amazon ECR image repositories. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod Execution Role</a> in the <i>Amazon
 * EKS User
 *
 * Guide</i>>
 *
 * Fargate profiles are immutable. However, you can create a new updated profile to replace an existing profile and then
 * delete the original after the updated profile has finished
 *
 * creating>
 *
 * If any Fargate profiles in a cluster are in the <code>DELETING</code> status, you must wait for that Fargate profile to
 * finish deleting before you can create any other profiles in that
 *
 * cluster>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/eks/latest/userguide/fargate-profile.html">Fargate
 * Profile</a> in the <i>Amazon EKS User
 */
CreateFargateProfileResponse * EksClient::createFargateProfile(const CreateFargateProfileRequest &request)
{
    return qobject_cast<CreateFargateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * CreateNodegroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a managed node group for an Amazon EKS cluster. You can only create a node group for your cluster that is equal
 * to the current Kubernetes version for the cluster. All node groups are created with the latest AMI release version for
 * the respective minor Kubernetes version of the cluster, unless you deploy a custom AMI using a launch template. For more
 * information about using launch templates, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch template
 *
 * support</a>>
 *
 * An Amazon EKS managed node group is an Amazon EC2 Auto Scaling group and associated Amazon EC2 instances that are
 * managed by Amazon Web Services for an Amazon EKS cluster. Each node group uses a version of the Amazon EKS optimized
 * Amazon Linux 2 AMI. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html">Managed Node Groups</a> in the
 * <i>Amazon EKS User Guide</i>.
 */
CreateNodegroupResponse * EksClient::createNodegroup(const CreateNodegroupRequest &request)
{
    return qobject_cast<CreateNodegroupResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DeleteAddonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an Amazon EKS
 *
 * add-on>
 *
 * When you remove the add-on, it will also be deleted from the cluster. You can always manually start an add-on on the
 * cluster using the Kubernetes
 */
DeleteAddonResponse * EksClient::deleteAddon(const DeleteAddonRequest &request)
{
    return qobject_cast<DeleteAddonResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon EKS cluster control
 *
 * plane>
 *
 * If you have active services in your cluster that are associated with a load balancer, you must delete those services
 * before deleting the cluster so that the load balancers are deleted properly. Otherwise, you can have orphaned resources
 * in your VPC that prevent you from being able to delete the VPC. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting a Cluster</a> in the <i>Amazon EKS
 * User
 *
 * Guide</i>>
 *
 * If you have managed node groups or Fargate profiles attached to the cluster, you must delete them first. For more
 * information, see <a>DeleteNodegroup</a> and
 */
DeleteClusterResponse * EksClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DeleteFargateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Fargate
 *
 * profile>
 *
 * When you delete a Fargate profile, any pods running on Fargate that were created with the profile are deleted. If those
 * pods match another Fargate profile, then they are scheduled on Fargate with that profile. If they no longer match any
 * Fargate profiles, then they are not scheduled on Fargate and they may remain in a pending
 *
 * state>
 *
 * Only one Fargate profile in a cluster can be in the <code>DELETING</code> status at a time. You must wait for a Fargate
 * profile to finish deleting before you can delete any other profiles in that
 */
DeleteFargateProfileResponse * EksClient::deleteFargateProfile(const DeleteFargateProfileRequest &request)
{
    return qobject_cast<DeleteFargateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DeleteNodegroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon EKS node group for a
 */
DeleteNodegroupResponse * EksClient::deleteNodegroup(const DeleteNodegroupRequest &request)
{
    return qobject_cast<DeleteNodegroupResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DeregisterClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters a connected cluster to remove it from the Amazon EKS control
 */
DeregisterClusterResponse * EksClient::deregisterCluster(const DeregisterClusterRequest &request)
{
    return qobject_cast<DeregisterClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeAddonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Amazon EKS
 */
DescribeAddonResponse * EksClient::describeAddon(const DescribeAddonRequest &request)
{
    return qobject_cast<DescribeAddonResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeAddonVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Kubernetes versions that the add-on can be used
 */
DescribeAddonVersionsResponse * EksClient::describeAddonVersions(const DescribeAddonVersionsRequest &request)
{
    return qobject_cast<DescribeAddonVersionsResponse *>(send(request));
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
 * href="https://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create a kubeconfig for Amazon
 *
 * EKS</a>> <note>
 *
 * The API server endpoint and certificate authority data aren't available until the cluster reaches the
 * <code>ACTIVE</code>
 */
DescribeClusterResponse * EksClient::describeCluster(const DescribeClusterRequest &request)
{
    return qobject_cast<DescribeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeFargateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptive information about an Fargate
 */
DescribeFargateProfileResponse * EksClient::describeFargateProfile(const DescribeFargateProfileRequest &request)
{
    return qobject_cast<DescribeFargateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeIdentityProviderConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptive information about an identity provider
 */
DescribeIdentityProviderConfigResponse * EksClient::describeIdentityProviderConfig(const DescribeIdentityProviderConfigRequest &request)
{
    return qobject_cast<DescribeIdentityProviderConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeNodegroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptive information about an Amazon EKS node
 */
DescribeNodegroupResponse * EksClient::describeNodegroup(const DescribeNodegroupRequest &request)
{
    return qobject_cast<DescribeNodegroupResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * DescribeUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptive information about an update against your Amazon EKS cluster or associated managed node group or
 * Amazon EKS
 *
 * add-on>
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
 * DisassociateIdentityProviderConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an identity provider configuration from a cluster. If you disassociate an identity provider from your
 * cluster, users included in the provider can no longer access the cluster. However, you can still access the cluster with
 * Amazon Web Services IAM
 */
DisassociateIdentityProviderConfigResponse * EksClient::disassociateIdentityProviderConfig(const DisassociateIdentityProviderConfigRequest &request)
{
    return qobject_cast<DisassociateIdentityProviderConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListAddonsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the available
 */
ListAddonsResponse * EksClient::listAddons(const ListAddonsRequest &request)
{
    return qobject_cast<ListAddonsResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon EKS clusters in your Amazon Web Services account in the specified
 */
ListClustersResponse * EksClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListFargateProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Fargate profiles associated with the specified cluster in your Amazon Web Services account in the specified
 */
ListFargateProfilesResponse * EksClient::listFargateProfiles(const ListFargateProfilesRequest &request)
{
    return qobject_cast<ListFargateProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListIdentityProviderConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of identity provider
 */
ListIdentityProviderConfigsResponse * EksClient::listIdentityProviderConfigs(const ListIdentityProviderConfigsRequest &request)
{
    return qobject_cast<ListIdentityProviderConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListNodegroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon EKS managed node groups associated with the specified cluster in your Amazon Web Services account in
 * the specified Region. Self-managed node groups are not
 */
ListNodegroupsResponse * EksClient::listNodegroups(const ListNodegroupsRequest &request)
{
    return qobject_cast<ListNodegroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tags for an Amazon EKS
 */
ListTagsForResourceResponse * EksClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * ListUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the updates associated with an Amazon EKS cluster or managed node group in your Amazon Web Services account, in
 * the specified
 */
ListUpdatesResponse * EksClient::listUpdates(const ListUpdatesRequest &request)
{
    return qobject_cast<ListUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * RegisterClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Connects a Kubernetes cluster to the Amazon EKS control plane.
 *
 * </p
 *
 * Any Kubernetes cluster can be connected to the Amazon EKS control plane to view current information about the cluster
 * and its nodes.
 *
 * </p
 *
 * Cluster connection requires two steps. First, send a <code> <a>RegisterClusterRequest</a> </code> to add it to the
 * Amazon EKS control
 *
 * plane>
 *
 * Second, a <a
 * href="https://amazon-eks.s3.us-west-2.amazonaws.com/eks-connector/manifests/eks-connector/latest/eks-connector.yaml">Manifest</a>
 * containing the <code>activationID</code> and <code>activationCode</code> must be applied to the Kubernetes cluster
 * through it's native provider to provide
 *
 * visibility>
 *
 * After the Manifest is updated and applied, then the connected cluster is visible to the Amazon EKS control plane. If the
 * Manifest is not applied within three days, then the connected cluster will no longer be visible and must be
 * deregistered. See
 */
RegisterClusterResponse * EksClient::registerCluster(const RegisterClusterRequest &request)
{
    return qobject_cast<RegisterClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified <code>resourceArn</code>. If existing tags on a resource
 * are not specified in the request parameters, they are not changed. When a resource is deleted, the tags associated with
 * that resource are deleted as well. Tags that you create for Amazon EKS resources do not propagate to any other resources
 * associated with the cluster. For example, if you tag a cluster with this operation, that tag does not automatically
 * propagate to the subnets and nodes associated with the
 */
TagResourceResponse * EksClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a
 */
UntagResourceResponse * EksClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * UpdateAddonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon EKS
 */
UpdateAddonResponse * EksClient::updateAddon(const UpdateAddonRequest &request)
{
    return qobject_cast<UpdateAddonResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * UpdateClusterConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon EKS cluster configuration. Your cluster continues to function during the update. The response output
 * includes an update ID that you can use to track the status of your cluster update with the <a>DescribeUpdate</a> API
 *
 * operation>
 *
 * You can use this API operation to enable or disable exporting the Kubernetes control plane logs for your cluster to
 * CloudWatch Logs. By default, cluster control plane logs aren't exported to CloudWatch Logs. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon EKS Cluster Control Plane
 * Logs</a> in the <i> <i>Amazon EKS User Guide</i>
 *
 * </i>> <note>
 *
 * CloudWatch Logs ingestion, archive storage, and data scanning rates apply to exported control plane logs. For more
 * information, see <a href="http://aws.amazon.com/cloudwatch/pricing/">CloudWatch
 *
 * Pricing</a>> </note>
 *
 * You can also use this API operation to enable or disable public and private access to your cluster's Kubernetes API
 * server endpoint. By default, public access is enabled, and private access is disabled. For more information, see <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon EKS cluster endpoint access
 * control</a> in the <i> <i>Amazon EKS User Guide</i> </i>.
 *
 * </p <b>
 *
 * You can't update the subnets or security group IDs for an existing
 *
 * cluster> </b>
 *
 * Cluster updates are asynchronous, and they should finish within a few minutes. During an update, the cluster status
 * moves to <code>UPDATING</code> (this status transition is eventually consistent). When the update is complete (either
 * <code>Failed</code> or <code>Successful</code>), the cluster status moves to
 */
UpdateClusterConfigResponse * EksClient::updateClusterConfig(const UpdateClusterConfigRequest &request)
{
    return qobject_cast<UpdateClusterConfigResponse *>(send(request));
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
 *
 * <code>Active</code>>
 *
 * If your cluster has managed node groups attached to it, all of your node groups’ Kubernetes versions must match the
 * cluster’s Kubernetes version in order to update the cluster to a new Kubernetes
 */
UpdateClusterVersionResponse * EksClient::updateClusterVersion(const UpdateClusterVersionRequest &request)
{
    return qobject_cast<UpdateClusterVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * UpdateNodegroupConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon EKS managed node group configuration. Your node group continues to function during the update. The
 * response output includes an update ID that you can use to track the status of your node group update with the
 * <a>DescribeUpdate</a> API operation. Currently you can update the Kubernetes labels for a node group or the scaling
 */
UpdateNodegroupConfigResponse * EksClient::updateNodegroupConfig(const UpdateNodegroupConfigRequest &request)
{
    return qobject_cast<UpdateNodegroupConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the EksClient service, and returns a pointer to an
 * UpdateNodegroupVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Kubernetes version or AMI version of an Amazon EKS managed node
 *
 * group>
 *
 * You can update a node group using a launch template only if the node group was originally deployed with a launch
 * template. If you need to update a custom AMI in a node group that was deployed with a launch template, then update your
 * custom AMI, specify the new ID in a new version of the launch template, and then update the node group to the new
 * version of the launch
 *
 * template>
 *
 * If you update without a launch template, then you can update to the latest available AMI version of a node group's
 * current Kubernetes version by not specifying a Kubernetes version in the request. You can update to the latest AMI
 * version of your cluster's current Kubernetes version by specifying your cluster's Kubernetes version in the request. For
 * more information, see <a href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon EKS
 * optimized Amazon Linux 2 AMI versions</a> in the <i>Amazon EKS User
 *
 * Guide</i>>
 *
 * You cannot roll back a node group to an earlier Kubernetes version or AMI
 *
 * version>
 *
 * When a node in a managed node group is terminated due to a scaling action or update, the pods in that node are drained
 * first. Amazon EKS attempts to drain the nodes gracefully and will fail if it is unable to do so. You can
 * <code>force</code> the update if Amazon EKS is unable to drain the nodes as a result of a pod disruption budget
 */
UpdateNodegroupVersionResponse * EksClient::updateNodegroupVersion(const UpdateNodegroupVersionRequest &request)
{
    return qobject_cast<UpdateNodegroupVersionResponse *>(send(request));
}

/*!
 * \class QtAws::Eks::EksClientPrivate
 * \brief The EksClientPrivate class provides private implementation for EksClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a EksClientPrivate object with public implementation \a q.
 */
EksClientPrivate::EksClientPrivate(EksClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Eks
} // namespace QtAws

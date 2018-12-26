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

#include "ramclient.h"
#include "ramclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptresourceshareinvitationrequest.h"
#include "acceptresourceshareinvitationresponse.h"
#include "associateresourcesharerequest.h"
#include "associateresourceshareresponse.h"
#include "createresourcesharerequest.h"
#include "createresourceshareresponse.h"
#include "deleteresourcesharerequest.h"
#include "deleteresourceshareresponse.h"
#include "disassociateresourcesharerequest.h"
#include "disassociateresourceshareresponse.h"
#include "enablesharingwithawsorganizationrequest.h"
#include "enablesharingwithawsorganizationresponse.h"
#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesresponse.h"
#include "getresourceshareassociationsrequest.h"
#include "getresourceshareassociationsresponse.h"
#include "getresourceshareinvitationsrequest.h"
#include "getresourceshareinvitationsresponse.h"
#include "getresourcesharesrequest.h"
#include "getresourcesharesresponse.h"
#include "listprincipalsrequest.h"
#include "listprincipalsresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "rejectresourceshareinvitationrequest.h"
#include "rejectresourceshareinvitationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateresourcesharerequest.h"
#include "updateresourceshareresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RAM
 * \brief Contains classess for accessing AWS Resource Access Manager (RAM).
 *
 * \inmodule QtAwsRam
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::RamClient
 * \brief The RamClient class provides access to the AWS Resource Access Manager (RAM) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resource. The
 *  following principals are
 * 
 *  supported> <ul> <li>
 * 
 *  The ID of an AWS
 * 
 *  accoun> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an OU from AWS
 * 
 *  Organization> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an organization from AWS
 * 
 *  Organization> </li> </ul>
 * 
 *  If you specify an AWS account that doesn't exist in the same organization as the account that owns the resource share,
 *  the owner of the specified account receives an invitation to accept the resource share. After the owner accepts the
 *  invitation, they can access the resources in the resource share. An administrator of the specified account can use IAM
 *  policies to restrict access resources in the resource
 */

/*!
 * \brief Constructs a RamClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RamClient::RamClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RamClientPrivate(this), parent)
{
    Q_D(RamClient);
    d->apiVersion = QStringLiteral("2018-01-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ram");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resource Access Manager");
    d->serviceName = QStringLiteral("ram");
}

/*!
 * \overload RamClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RamClient::RamClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RamClientPrivate(this), parent)
{
    Q_D(RamClient);
    d->apiVersion = QStringLiteral("2018-01-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ram");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resource Access Manager");
    d->serviceName = QStringLiteral("ram");
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * AcceptResourceShareInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts an invitation to a resource share from another AWS
 */
AcceptResourceShareInvitationResponse * RamClient::acceptResourceShareInvitation(const AcceptResourceShareInvitationRequest &request)
{
    return qobject_cast<AcceptResourceShareInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * AssociateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified resource share with the specified principals and
 */
AssociateResourceShareResponse * RamClient::associateResourceShare(const AssociateResourceShareRequest &request)
{
    return qobject_cast<AssociateResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * CreateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resource
 */
CreateResourceShareResponse * RamClient::createResourceShare(const CreateResourceShareRequest &request)
{
    return qobject_cast<CreateResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * DeleteResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified resource
 */
DeleteResourceShareResponse * RamClient::deleteResourceShare(const DeleteResourceShareRequest &request)
{
    return qobject_cast<DeleteResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * DisassociateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified principals or resources from the specified resource
 */
DisassociateResourceShareResponse * RamClient::disassociateResourceShare(const DisassociateResourceShareRequest &request)
{
    return qobject_cast<DisassociateResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * EnableSharingWithAwsOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables resource sharing within your
 */
EnableSharingWithAwsOrganizationResponse * RamClient::enableSharingWithAwsOrganization(const EnableSharingWithAwsOrganizationRequest &request)
{
    return qobject_cast<EnableSharingWithAwsOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourcePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the policies for the specifies
 */
GetResourcePoliciesResponse * RamClient::getResourcePolicies(const GetResourcePoliciesRequest &request)
{
    return qobject_cast<GetResourcePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourceShareAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the associations for the specified resource
 */
GetResourceShareAssociationsResponse * RamClient::getResourceShareAssociations(const GetResourceShareAssociationsRequest &request)
{
    return qobject_cast<GetResourceShareAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourceShareInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified invitations for resource
 */
GetResourceShareInvitationsResponse * RamClient::getResourceShareInvitations(const GetResourceShareInvitationsRequest &request)
{
    return qobject_cast<GetResourceShareInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourceSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified resource shares or all of your resource
 */
GetResourceSharesResponse * RamClient::getResourceShares(const GetResourceSharesRequest &request)
{
    return qobject_cast<GetResourceSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListPrincipalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the principals with access to the specified
 */
ListPrincipalsResponse * RamClient::listPrincipals(const ListPrincipalsRequest &request)
{
    return qobject_cast<ListPrincipalsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources that the specified principal can
 */
ListResourcesResponse * RamClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * RejectResourceShareInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects an invitation to a resource share from another AWS
 */
RejectResourceShareInvitationResponse * RamClient::rejectResourceShareInvitation(const RejectResourceShareInvitationRequest &request)
{
    return qobject_cast<RejectResourceShareInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified resource
 */
TagResourceResponse * RamClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified resource
 */
UntagResourceResponse * RamClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * UpdateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified resource
 */
UpdateResourceShareResponse * RamClient::updateResourceShare(const UpdateResourceShareRequest &request)
{
    return qobject_cast<UpdateResourceShareResponse *>(send(request));
}

/*!
 * \class QtAws::RAM::RamClientPrivate
 * \brief The RamClientPrivate class provides private implementation for RamClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a RamClientPrivate object with public implementation \a q.
 */
RamClientPrivate::RamClientPrivate(RamClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RAM
} // namespace QtAws

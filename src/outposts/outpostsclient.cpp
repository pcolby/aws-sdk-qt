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

#include "outpostsclient.h"
#include "outpostsclient_p.h"

#include "core/awssignaturev4.h"
#include "createoutpostrequest.h"
#include "createoutpostresponse.h"
#include "deleteoutpostrequest.h"
#include "deleteoutpostresponse.h"
#include "deletesiterequest.h"
#include "deletesiteresponse.h"
#include "getoutpostrequest.h"
#include "getoutpostresponse.h"
#include "getoutpostinstancetypesrequest.h"
#include "getoutpostinstancetypesresponse.h"
#include "listoutpostsrequest.h"
#include "listoutpostsresponse.h"
#include "listsitesrequest.h"
#include "listsitesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Outposts
 * \brief Contains classess for accessing AWS Outposts.
 *
 * \inmodule QtAwsOutposts
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::OutpostsClient
 * \brief The OutpostsClient class provides access to the AWS Outposts service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 */

/*!
 * \brief Constructs a OutpostsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
OutpostsClient::OutpostsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-03"),
    QStringLiteral("outposts"),
    QStringLiteral("AWS Outposts"),
    QStringLiteral("outposts"),
    parent), d_ptr(new OutpostsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload OutpostsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
OutpostsClient::OutpostsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-03"),
    QStringLiteral("outposts"),
    QStringLiteral("AWS Outposts"),
    QStringLiteral("outposts"),
    parent), d_ptr(new OutpostsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * CreateOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateOutpostResponse * OutpostsClient::createOutpost(const CreateOutpostRequest &request)
{
    return qobject_cast<CreateOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * DeleteOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeleteOutpostResponse * OutpostsClient::deleteOutpost(const DeleteOutpostRequest &request)
{
    return qobject_cast<DeleteOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * DeleteSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeleteSiteResponse * OutpostsClient::deleteSite(const DeleteSiteRequest &request)
{
    return qobject_cast<DeleteSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
GetOutpostResponse * OutpostsClient::getOutpost(const GetOutpostRequest &request)
{
    return qobject_cast<GetOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetOutpostInstanceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the instance types for the specified
 */
GetOutpostInstanceTypesResponse * OutpostsClient::getOutpostInstanceTypes(const GetOutpostInstanceTypesRequest &request)
{
    return qobject_cast<GetOutpostInstanceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListOutpostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the Outposts for your AWS
 */
ListOutpostsResponse * OutpostsClient::listOutposts(const ListOutpostsRequest &request)
{
    return qobject_cast<ListOutpostsResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListSitesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the sites for the specified AWS
 */
ListSitesResponse * OutpostsClient::listSites(const ListSitesRequest &request)
{
    return qobject_cast<ListSitesResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * OutpostsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified
 */
TagResourceResponse * OutpostsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified
 */
UntagResourceResponse * OutpostsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::Outposts::OutpostsClientPrivate
 * \brief The OutpostsClientPrivate class provides private implementation for OutpostsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsClientPrivate object with public implementation \a q.
 */
OutpostsClientPrivate::OutpostsClientPrivate(OutpostsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Outposts
} // namespace QtAws

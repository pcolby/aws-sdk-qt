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

#include "rbinclient.h"
#include "rbinclient_p.h"

#include "core/awssignaturev4.h"
#include "createrulerequest.h"
#include "createruleresponse.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "getrulerequest.h"
#include "getruleresponse.h"
#include "listrulesrequest.h"
#include "listrulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updaterulerequest.h"
#include "updateruleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Rbin
 * \brief Contains classess for accessing Amazon Recycle Bin.
 *
 * \inmodule QtAwsRbin
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::RbinClient
 * \brief The RbinClient class provides access to the Amazon Recycle Bin service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRbin
 *
 *  This is the <i>Recycle Bin API Reference</i>. This documentation provides descriptions and syntax for each of the
 *  actions and data types in Recycle
 * 
 *  Bin>
 * 
 *  Recycle Bin is a resource recovery feature that enables you to restore accidentally deleted snapshots and EBS-backed
 *  AMIs. When using Recycle Bin, if your resources are deleted, they are retained in the Recycle Bin for a time period that
 *  you
 * 
 *  specify>
 * 
 *  You can restore a resource from the Recycle Bin at any time before its retention period expires. After you restore a
 *  resource from the Recycle Bin, the resource is removed from the Recycle Bin, and you can then use it in the same way you
 *  use any other resource of that type in your account. If the retention period expires and the resource is not restored,
 *  the resource is permanently deleted from the Recycle Bin and is no longer available for recovery. For more information
 *  about Recycle Bin, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-recycle-bin.html"> Recycle
 *  Bin</a> in the <i>Amazon Elastic Compute Cloud User
 */

/*!
 * \brief Constructs a RbinClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RbinClient::RbinClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RbinClientPrivate(this), parent)
{
    Q_D(RbinClient);
    d->apiVersion = QStringLiteral("2021-06-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rbin");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Recycle Bin");
    d->serviceName = QStringLiteral("rbin");
}

/*!
 * \overload RbinClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RbinClient::RbinClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RbinClientPrivate(this), parent)
{
    Q_D(RbinClient);
    d->apiVersion = QStringLiteral("2021-06-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rbin");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Recycle Bin");
    d->serviceName = QStringLiteral("rbin");
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * CreateRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Recycle Bin retention rule. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-create-rule">
 * Create Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreateRuleResponse * RbinClient::createRule(const CreateRuleRequest &request)
{
    return qobject_cast<CreateRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * DeleteRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Recycle Bin retention rule. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-delete-rule">
 * Delete Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud User
 */
DeleteRuleResponse * RbinClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * GetRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Recycle Bin retention
 */
GetRuleResponse * RbinClient::getRule(const GetRuleRequest &request)
{
    return qobject_cast<GetRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * ListRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Recycle Bin retention rules in the
 */
ListRulesResponse * RbinClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags assigned to a retention
 */
ListTagsForResourceResponse * RbinClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns tags to the specified retention
 */
TagResourceResponse * RbinClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unassigns a tag from a retention
 */
UntagResourceResponse * RbinClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RbinClient service, and returns a pointer to an
 * UpdateRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Recycle Bin retention rule. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-update-rule">
 * Update Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud User
 */
UpdateRuleResponse * RbinClient::updateRule(const UpdateRuleRequest &request)
{
    return qobject_cast<UpdateRuleResponse *>(send(request));
}

/*!
 * \class QtAws::Rbin::RbinClientPrivate
 * \brief The RbinClientPrivate class provides private implementation for RbinClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a RbinClientPrivate object with public implementation \a q.
 */
RbinClientPrivate::RbinClientPrivate(RbinClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Rbin
} // namespace QtAws

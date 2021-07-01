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

#include "codestarnotificationsclient.h"
#include "codestarnotificationsclient_p.h"

#include "core/awssignaturev4.h"
#include "createnotificationrulerequest.h"
#include "createnotificationruleresponse.h"
#include "deletenotificationrulerequest.h"
#include "deletenotificationruleresponse.h"
#include "deletetargetrequest.h"
#include "deletetargetresponse.h"
#include "describenotificationrulerequest.h"
#include "describenotificationruleresponse.h"
#include "listeventtypesrequest.h"
#include "listeventtypesresponse.h"
#include "listnotificationrulesrequest.h"
#include "listnotificationrulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtargetsrequest.h"
#include "listtargetsresponse.h"
#include "subscriberequest.h"
#include "subscriberesponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unsubscriberequest.h"
#include "unsubscriberesponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatenotificationrulerequest.h"
#include "updatenotificationruleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeStarNotifications
 * \brief Contains classess for accessing AWS CodeStar Notifications.
 *
 * \inmodule QtAwsCodeStarNotifications
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeStarNotifications {

/*!
 * \class QtAws::CodeStarNotifications::CodeStarNotificationsClient
 * \brief The CodeStarNotificationsClient class provides access to the AWS CodeStar Notifications service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeStarNotifications
 *
 *  This AWS CodeStar Notifications API Reference provides descriptions and usage examples of the operations and data types
 *  for the AWS CodeStar Notifications API. You can use the AWS CodeStar Notifications API to work with the following
 * 
 *  objects>
 * 
 *  Notification rules, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateNotificationRule</a>, which creates a notification rule for a resource in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>DeleteNotificationRule</a>, which deletes a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeNotificationRule</a>, which provides information about a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListNotificationRules</a>, which lists the notification rules associated with your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UpdateNotificationRule</a>, which changes the name, events, or targets associated with a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Subscribe</a>, which subscribes a target to a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Unsubscribe</a>, which removes a target from a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Targets, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>DeleteTarget</a>, which removes a notification rule target (SNS topic) from a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListTargets</a>, which lists the targets associated with a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Events, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListEventTypes</a>, which lists the event types you can include in a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Tags, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListTagsForResource</a>, which lists the tags already associated with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>TagResource</a>, which associates a tag you provide with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UntagResource</a>, which removes a tag from a notification rule in your account.
 * 
 *  </p </li> </ul>
 * 
 *  For information about how to use AWS CodeStar Notifications, see link in the CodeStarNotifications User Guide.
 */

/*!
 * \brief Constructs a CodeStarNotificationsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeStarNotificationsClient::CodeStarNotificationsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeStarNotificationsClientPrivate(this), parent)
{
    Q_D(CodeStarNotificationsClient);
    d->apiVersion = QStringLiteral("2019-10-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codestar-notifications");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CodeStar Notifications");
    d->serviceName = QStringLiteral("codestar-notifications");
}

/*!
 * \overload CodeStarNotificationsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CodeStarNotificationsClient::CodeStarNotificationsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeStarNotificationsClientPrivate(this), parent)
{
    Q_D(CodeStarNotificationsClient);
    d->apiVersion = QStringLiteral("2019-10-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codestar-notifications");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CodeStar Notifications");
    d->serviceName = QStringLiteral("codestar-notifications");
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * CreateNotificationRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a notification rule for a resource. The rule specifies the events you want notifications about and the targets
 * (such as SNS topics) where you want to receive
 */
CreateNotificationRuleResponse * CodeStarNotificationsClient::createNotificationRule(const CreateNotificationRuleRequest &request)
{
    return qobject_cast<CreateNotificationRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * DeleteNotificationRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a notification rule for a
 */
DeleteNotificationRuleResponse * CodeStarNotificationsClient::deleteNotificationRule(const DeleteNotificationRuleRequest &request)
{
    return qobject_cast<DeleteNotificationRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * DeleteTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified target for
 */
DeleteTargetResponse * CodeStarNotificationsClient::deleteTarget(const DeleteTargetRequest &request)
{
    return qobject_cast<DeleteTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * DescribeNotificationRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specified notification
 */
DescribeNotificationRuleResponse * CodeStarNotificationsClient::describeNotificationRule(const DescribeNotificationRuleRequest &request)
{
    return qobject_cast<DescribeNotificationRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * ListEventTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the event types available for configuring
 */
ListEventTypesResponse * CodeStarNotificationsClient::listEventTypes(const ListEventTypesRequest &request)
{
    return qobject_cast<ListEventTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * ListNotificationRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the notification rules for an AWS
 */
ListNotificationRulesResponse * CodeStarNotificationsClient::listNotificationRules(const ListNotificationRulesRequest &request)
{
    return qobject_cast<ListNotificationRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags associated with a notification
 */
ListTagsForResourceResponse * CodeStarNotificationsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * ListTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the notification rule targets for an AWS
 */
ListTargetsResponse * CodeStarNotificationsClient::listTargets(const ListTargetsRequest &request)
{
    return qobject_cast<ListTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * SubscribeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between a notification rule and an SNS topic so that the associated target can receive
 * notifications when the events described in the rule are
 */
SubscribeResponse * CodeStarNotificationsClient::subscribe(const SubscribeRequest &request)
{
    return qobject_cast<SubscribeResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a set of provided tags with a notification
 */
TagResourceResponse * CodeStarNotificationsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * UnsubscribeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an association between a notification rule and an Amazon SNS topic so that subscribers to that topic stop
 * receiving notifications when the events described in the rule are
 */
UnsubscribeResponse * CodeStarNotificationsClient::unsubscribe(const UnsubscribeRequest &request)
{
    return qobject_cast<UnsubscribeResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between one or more provided tags and a notification
 */
UntagResourceResponse * CodeStarNotificationsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarNotificationsClient service, and returns a pointer to an
 * UpdateNotificationRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a notification rule for a resource. You can change the events that trigger the notification rule, the status of
 * the rule, and the targets that receive the
 *
 * notifications> <note>
 *
 * To add or remove tags for a notification rule, you must use <a>TagResource</a> and
 */
UpdateNotificationRuleResponse * CodeStarNotificationsClient::updateNotificationRule(const UpdateNotificationRuleRequest &request)
{
    return qobject_cast<UpdateNotificationRuleResponse *>(send(request));
}

/*!
 * \class QtAws::CodeStarNotifications::CodeStarNotificationsClientPrivate
 * \brief The CodeStarNotificationsClientPrivate class provides private implementation for CodeStarNotificationsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * Constructs a CodeStarNotificationsClientPrivate object with public implementation \a q.
 */
CodeStarNotificationsClientPrivate::CodeStarNotificationsClientPrivate(CodeStarNotificationsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeStarNotifications
} // namespace QtAws

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

#ifndef QTAWS_CODESTARNOTIFICATIONSCLIENT_H
#define QTAWS_CODESTARNOTIFICATIONSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodeStarNotifications {

class CodeStarNotificationsClientPrivate;
class CreateNotificationRuleRequest;
class CreateNotificationRuleResponse;
class DeleteNotificationRuleRequest;
class DeleteNotificationRuleResponse;
class DeleteTargetRequest;
class DeleteTargetResponse;
class DescribeNotificationRuleRequest;
class DescribeNotificationRuleResponse;
class ListEventTypesRequest;
class ListEventTypesResponse;
class ListNotificationRulesRequest;
class ListNotificationRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTargetsRequest;
class ListTargetsResponse;
class SubscribeRequest;
class SubscribeResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnsubscribeRequest;
class UnsubscribeResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateNotificationRuleRequest;
class UpdateNotificationRuleResponse;

class QTAWS_EXPORT CodeStarNotificationsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeStarNotificationsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeStarNotificationsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateNotificationRuleResponse * createNotificationRule(const CreateNotificationRuleRequest &request);
    DeleteNotificationRuleResponse * deleteNotificationRule(const DeleteNotificationRuleRequest &request);
    DeleteTargetResponse * deleteTarget(const DeleteTargetRequest &request);
    DescribeNotificationRuleResponse * describeNotificationRule(const DescribeNotificationRuleRequest &request);
    ListEventTypesResponse * listEventTypes(const ListEventTypesRequest &request);
    ListNotificationRulesResponse * listNotificationRules(const ListNotificationRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTargetsResponse * listTargets(const ListTargetsRequest &request);
    SubscribeResponse * subscribe(const SubscribeRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnsubscribeResponse * unsubscribe(const UnsubscribeRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateNotificationRuleResponse * updateNotificationRule(const UpdateNotificationRuleRequest &request);

protected:
    /// @cond internal
    CodeStarNotificationsClientPrivate * const d_ptr; ///< Internal d-pointer.
    CodeStarNotificationsClient(CodeStarNotificationsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CodeStarNotificationsClient)
    Q_DISABLE_COPY(CodeStarNotificationsClient)

};

} // namespace CodeStarNotifications
} // namespace QtAws

#endif

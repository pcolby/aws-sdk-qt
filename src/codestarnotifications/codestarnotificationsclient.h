// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARNOTIFICATIONSCLIENT_H
#define QTAWS_CODESTARNOTIFICATIONSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodestarnotificationsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CodestarNotifications {

class CodestarNotificationsClientPrivate;
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

class QTAWSCODESTARNOTIFICATIONS_EXPORT CodestarNotificationsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodestarNotificationsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CodestarNotificationsClient(
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

private:
    Q_DECLARE_PRIVATE(CodestarNotificationsClient)
    Q_DISABLE_COPY(CodestarNotificationsClient)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif

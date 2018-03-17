/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDWATCHEVENTSCLIENT_H
#define QTAWS_CLOUDWATCHEVENTSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CloudWatchEvents {

class CloudWatchEventsClientPrivate;

class QTAWS_EXPORT CloudWatchEventsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchEventsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchEventsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DescribeRuleResponse * describeRule(const DescribeRuleRequest &request);
    DisableRuleResponse * disableRule(const DisableRuleRequest &request);
    EnableRuleResponse * enableRule(const EnableRuleRequest &request);
    ListRuleNamesByTargetResponse * listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListTargetsByRuleResponse * listTargetsByRule(const ListTargetsByRuleRequest &request);
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    PutRuleResponse * putRule(const PutRuleRequest &request);
    PutTargetsResponse * putTargets(const PutTargetsRequest &request);
    RemoveTargetsResponse * removeTargets(const RemoveTargetsRequest &request);
    TestEventPatternResponse * testEventPattern(const TestEventPatternRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchEventsClient)
    Q_DISABLE_COPY(CloudWatchEventsClient)

};

} // namespace CloudWatchEvents
} // namespace AWS

#endif

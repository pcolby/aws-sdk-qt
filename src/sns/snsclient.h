/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_SNSCLIENT_H
#define QTAWS_SNSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class SnsClientPrivate;

class QTAWS_EXPORT SnsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SnsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SnsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SnsAddPermissionResponse * addPermission(const SnsAddPermissionRequest &request);
    SnsCheckIfPhoneNumberIsOptedOutResponse * checkIfPhoneNumberIsOptedOut(const SnsCheckIfPhoneNumberIsOptedOutRequest &request);
    SnsConfirmSubscriptionResponse * confirmSubscription(const SnsConfirmSubscriptionRequest &request);
    SnsCreatePlatformApplicationResponse * createPlatformApplication(const SnsCreatePlatformApplicationRequest &request);
    SnsCreatePlatformEndpointResponse * createPlatformEndpoint(const SnsCreatePlatformEndpointRequest &request);
    SnsCreateTopicResponse * createTopic(const SnsCreateTopicRequest &request);
    SnsDeleteEndpointResponse * deleteEndpoint(const SnsDeleteEndpointRequest &request);
    SnsDeletePlatformApplicationResponse * deletePlatformApplication(const SnsDeletePlatformApplicationRequest &request);
    SnsDeleteTopicResponse * deleteTopic(const SnsDeleteTopicRequest &request);
    SnsGetEndpointAttributesResponse * getEndpointAttributes(const SnsGetEndpointAttributesRequest &request);
    SnsGetPlatformApplicationAttributesResponse * getPlatformApplicationAttributes(const SnsGetPlatformApplicationAttributesRequest &request);
    SnsGetSMSAttributesResponse * getSMSAttributes(const SnsGetSMSAttributesRequest &request);
    SnsGetSubscriptionAttributesResponse * getSubscriptionAttributes(const SnsGetSubscriptionAttributesRequest &request);
    SnsGetTopicAttributesResponse * getTopicAttributes(const SnsGetTopicAttributesRequest &request);
    SnsListEndpointsByPlatformApplicationResponse * listEndpointsByPlatformApplication(const SnsListEndpointsByPlatformApplicationRequest &request);
    SnsListPhoneNumbersOptedOutResponse * listPhoneNumbersOptedOut(const SnsListPhoneNumbersOptedOutRequest &request);
    SnsListPlatformApplicationsResponse * listPlatformApplications(const SnsListPlatformApplicationsRequest &request);
    SnsListSubscriptionsResponse * listSubscriptions(const SnsListSubscriptionsRequest &request);
    SnsListSubscriptionsByTopicResponse * listSubscriptionsByTopic(const SnsListSubscriptionsByTopicRequest &request);
    SnsListTopicsResponse * listTopics(const SnsListTopicsRequest &request);
    SnsOptInPhoneNumberResponse * optInPhoneNumber(const SnsOptInPhoneNumberRequest &request);
    SnsPublishResponse * publish(const SnsPublishRequest &request);
    SnsRemovePermissionResponse * removePermission(const SnsRemovePermissionRequest &request);
    SnsSetEndpointAttributesResponse * setEndpointAttributes(const SnsSetEndpointAttributesRequest &request);
    SnsSetPlatformApplicationAttributesResponse * setPlatformApplicationAttributes(const SnsSetPlatformApplicationAttributesRequest &request);
    SnsSetSMSAttributesResponse * setSMSAttributes(const SnsSetSMSAttributesRequest &request);
    SnsSetSubscriptionAttributesResponse * setSubscriptionAttributes(const SnsSetSubscriptionAttributesRequest &request);
    SnsSetTopicAttributesResponse * setTopicAttributes(const SnsSetTopicAttributesRequest &request);
    SnsSubscribeResponse * subscribe(const SnsSubscribeRequest &request);
    SnsUnsubscribeResponse * unsubscribe(const SnsUnsubscribeRequest &request);

private:
    Q_DECLARE_PRIVATE(SnsClient)
    Q_DISABLE_COPY(SnsClient)

};

QTAWS_END_NAMESPACE

#endif

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

#ifndef QTAWS_SHIELDCLIENT_H
#define QTAWS_SHIELDCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Shield {

class ShieldClientPrivate;

class QTAWS_EXPORT ShieldClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ShieldClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ShieldClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateProtectionResponse * createProtection(const CreateProtectionRequest &request);
    CreateSubscriptionResponse * createSubscription(const CreateSubscriptionRequest &request);
    DeleteProtectionResponse * deleteProtection(const DeleteProtectionRequest &request);
    DeleteSubscriptionResponse * deleteSubscription(const DeleteSubscriptionRequest &request);
    DescribeAttackResponse * describeAttack(const DescribeAttackRequest &request);
    DescribeProtectionResponse * describeProtection(const DescribeProtectionRequest &request);
    DescribeSubscriptionResponse * describeSubscription(const DescribeSubscriptionRequest &request);
    GetSubscriptionStateResponse * getSubscriptionState(const GetSubscriptionStateRequest &request);
    ListAttacksResponse * listAttacks(const ListAttacksRequest &request);
    ListProtectionsResponse * listProtections(const ListProtectionsRequest &request);

private:
    Q_DECLARE_PRIVATE(ShieldClient)
    Q_DISABLE_COPY(ShieldClient)

};

} // namespace Shield
} // namespace AWS

#endif

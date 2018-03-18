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

#ifndef QTAWS_CLOUD9CLIENT_H
#define QTAWS_CLOUD9CLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Cloud9 {

class Cloud9ClientPrivate;

class QTAWS_EXPORT Cloud9Client : public AwsAbstractClient {
    Q_OBJECT

public:
    Cloud9Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Cloud9Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateEnvironmentEC2Response * createEnvironmentEC2(const CreateEnvironmentEC2Request &request);
    CreateEnvironmentMembershipResponse * createEnvironmentMembership(const CreateEnvironmentMembershipRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    DeleteEnvironmentMembershipResponse * deleteEnvironmentMembership(const DeleteEnvironmentMembershipRequest &request);
    DescribeEnvironmentMembershipsResponse * describeEnvironmentMemberships(const DescribeEnvironmentMembershipsRequest &request);
    DescribeEnvironmentStatusResponse * describeEnvironmentStatus(const DescribeEnvironmentStatusRequest &request);
    DescribeEnvironmentsResponse * describeEnvironments(const DescribeEnvironmentsRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    UpdateEnvironmentMembershipResponse * updateEnvironmentMembership(const UpdateEnvironmentMembershipRequest &request);

private:
    Q_DECLARE_PRIVATE(Cloud9Client)
    Q_DISABLE_COPY(Cloud9Client)

};

} // namespace Cloud9
} // namespace AWS

#endif

/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MQCLIENT_H
#define QTAWS_MQCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MQ {

class MqClientPrivate;
class CreateBrokerRequest;
class CreateBrokerResponse;
class CreateConfigurationRequest;
class CreateConfigurationResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteBrokerRequest;
class DeleteBrokerResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeBrokerRequest;
class DescribeBrokerResponse;
class DescribeConfigurationRequest;
class DescribeConfigurationResponse;
class DescribeConfigurationRevisionRequest;
class DescribeConfigurationRevisionResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class ListBrokersRequest;
class ListBrokersResponse;
class ListConfigurationRevisionsRequest;
class ListConfigurationRevisionsResponse;
class ListConfigurationsRequest;
class ListConfigurationsResponse;
class ListUsersRequest;
class ListUsersResponse;
class RebootBrokerRequest;
class RebootBrokerResponse;
class UpdateBrokerRequest;
class UpdateBrokerResponse;
class UpdateConfigurationRequest;
class UpdateConfigurationResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWS_EXPORT MqClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MqClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MqClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBrokerResponse * createBroker(const CreateBrokerRequest &request);
    CreateConfigurationResponse * createConfiguration(const CreateConfigurationRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteBrokerResponse * deleteBroker(const DeleteBrokerRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeBrokerResponse * describeBroker(const DescribeBrokerRequest &request);
    DescribeConfigurationResponse * describeConfiguration(const DescribeConfigurationRequest &request);
    DescribeConfigurationRevisionResponse * describeConfigurationRevision(const DescribeConfigurationRevisionRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    ListBrokersResponse * listBrokers(const ListBrokersRequest &request);
    ListConfigurationRevisionsResponse * listConfigurationRevisions(const ListConfigurationRevisionsRequest &request);
    ListConfigurationsResponse * listConfigurations(const ListConfigurationsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    RebootBrokerResponse * rebootBroker(const RebootBrokerRequest &request);
    UpdateBrokerResponse * updateBroker(const UpdateBrokerRequest &request);
    UpdateConfigurationResponse * updateConfiguration(const UpdateConfigurationRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(MqClient)
    Q_DISABLE_COPY(MqClient)

};

} // namespace MQ
} // namespace QtAws

#endif

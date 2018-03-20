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

#ifndef QTAWS_CLOUDHSMCLIENT_H
#define QTAWS_CLOUDHSMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CloudHSM {

class CloudHSMClientPrivate;
class AddTagsToResourceResponse;
class CreateHapgResponse;
class CreateHsmResponse;
class CreateLunaClientResponse;
class DeleteHapgResponse;
class DeleteHsmResponse;
class DeleteLunaClientResponse;
class DescribeHapgResponse;
class DescribeHsmResponse;
class DescribeLunaClientResponse;
class GetConfigResponse;
class ListAvailableZonesResponse;
class ListHapgsResponse;
class ListHsmsResponse;
class ListLunaClientsResponse;
class ListTagsForResourceResponse;
class ModifyHapgResponse;
class ModifyHsmResponse;
class ModifyLunaClientResponse;
class RemoveTagsFromResourceResponse;

class QTAWS_EXPORT CloudHSMClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudHSMClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudHSMClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    CreateHapgResponse * createHapg(const CreateHapgRequest &request);
    CreateHsmResponse * createHsm(const CreateHsmRequest &request);
    CreateLunaClientResponse * createLunaClient(const CreateLunaClientRequest &request);
    DeleteHapgResponse * deleteHapg(const DeleteHapgRequest &request);
    DeleteHsmResponse * deleteHsm(const DeleteHsmRequest &request);
    DeleteLunaClientResponse * deleteLunaClient(const DeleteLunaClientRequest &request);
    DescribeHapgResponse * describeHapg(const DescribeHapgRequest &request);
    DescribeHsmResponse * describeHsm(const DescribeHsmRequest &request);
    DescribeLunaClientResponse * describeLunaClient(const DescribeLunaClientRequest &request);
    GetConfigResponse * getConfig(const GetConfigRequest &request);
    ListAvailableZonesResponse * listAvailableZones(const ListAvailableZonesRequest &request);
    ListHapgsResponse * listHapgs(const ListHapgsRequest &request);
    ListHsmsResponse * listHsms(const ListHsmsRequest &request);
    ListLunaClientsResponse * listLunaClients(const ListLunaClientsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyHapgResponse * modifyHapg(const ModifyHapgRequest &request);
    ModifyHsmResponse * modifyHsm(const ModifyHsmRequest &request);
    ModifyLunaClientResponse * modifyLunaClient(const ModifyLunaClientRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudHSMClient)
    Q_DISABLE_COPY(CloudHSMClient)

};

} // namespace CloudHSM
} // namespace AWS

#endif

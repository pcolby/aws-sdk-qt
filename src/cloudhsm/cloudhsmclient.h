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

#ifndef QTAWS_CLOUDHSMCLIENT_H
#define QTAWS_CLOUDHSMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudhsmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CloudHSM {

class CloudHSMClientPrivate;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class CreateHapgRequest;
class CreateHapgResponse;
class CreateHsmRequest;
class CreateHsmResponse;
class CreateLunaClientRequest;
class CreateLunaClientResponse;
class DeleteHapgRequest;
class DeleteHapgResponse;
class DeleteHsmRequest;
class DeleteHsmResponse;
class DeleteLunaClientRequest;
class DeleteLunaClientResponse;
class DescribeHapgRequest;
class DescribeHapgResponse;
class DescribeHsmRequest;
class DescribeHsmResponse;
class DescribeLunaClientRequest;
class DescribeLunaClientResponse;
class GetConfigRequest;
class GetConfigResponse;
class ListAvailableZonesRequest;
class ListAvailableZonesResponse;
class ListHapgsRequest;
class ListHapgsResponse;
class ListHsmsRequest;
class ListHsmsResponse;
class ListLunaClientsRequest;
class ListLunaClientsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ModifyHapgRequest;
class ModifyHapgResponse;
class ModifyHsmRequest;
class ModifyHsmResponse;
class ModifyLunaClientRequest;
class ModifyLunaClientResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;

class QTAWSCLOUDHSM_EXPORT CloudHSMClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudHSMClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudHSMClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif

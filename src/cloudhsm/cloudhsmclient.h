// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMCLIENT_H
#define QTAWS_CLOUDHSMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudhsmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CloudHsm {

class CloudHsmClientPrivate;
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

class QTAWSCLOUDHSM_EXPORT CloudHsmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudHsmClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudHsmClient(
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
    Q_DECLARE_PRIVATE(CloudHsmClient)
    Q_DISABLE_COPY(CloudHsmClient)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

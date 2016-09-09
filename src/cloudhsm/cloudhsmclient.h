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

#ifndef QTAWS_CLOUDHSMCLIENT_H
#define QTAWS_CLOUDHSMCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CloudHSMClientPrivate;

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
    CloudHSMAddTagsToResourceResponse * addTagsToResource(const CloudHSMAddTagsToResourceRequest &request);
    CloudHSMCreateHapgResponse * createHapg(const CloudHSMCreateHapgRequest &request);
    CloudHSMCreateHsmResponse * createHsm(const CloudHSMCreateHsmRequest &request);
    CloudHSMCreateLunaClientResponse * createLunaClient(const CloudHSMCreateLunaClientRequest &request);
    CloudHSMDeleteHapgResponse * deleteHapg(const CloudHSMDeleteHapgRequest &request);
    CloudHSMDeleteHsmResponse * deleteHsm(const CloudHSMDeleteHsmRequest &request);
    CloudHSMDeleteLunaClientResponse * deleteLunaClient(const CloudHSMDeleteLunaClientRequest &request);
    CloudHSMDescribeHapgResponse * describeHapg(const CloudHSMDescribeHapgRequest &request);
    CloudHSMDescribeHsmResponse * describeHsm(const CloudHSMDescribeHsmRequest &request);
    CloudHSMDescribeLunaClientResponse * describeLunaClient(const CloudHSMDescribeLunaClientRequest &request);
    CloudHSMGetConfigResponse * getConfig(const CloudHSMGetConfigRequest &request);
    CloudHSMListAvailableZonesResponse * listAvailableZones(const CloudHSMListAvailableZonesRequest &request);
    CloudHSMListHapgsResponse * listHapgs(const CloudHSMListHapgsRequest &request);
    CloudHSMListHsmsResponse * listHsms(const CloudHSMListHsmsRequest &request);
    CloudHSMListLunaClientsResponse * listLunaClients(const CloudHSMListLunaClientsRequest &request);
    CloudHSMListTagsForResourceResponse * listTagsForResource(const CloudHSMListTagsForResourceRequest &request);
    CloudHSMModifyHapgResponse * modifyHapg(const CloudHSMModifyHapgRequest &request);
    CloudHSMModifyHsmResponse * modifyHsm(const CloudHSMModifyHsmRequest &request);
    CloudHSMModifyLunaClientResponse * modifyLunaClient(const CloudHSMModifyLunaClientRequest &request);
    CloudHSMRemoveTagsFromResourceResponse * removeTagsFromResource(const CloudHSMRemoveTagsFromResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudHSMClient)
    Q_DISABLE_COPY(CloudHSMClient)

};

QTAWS_END_NAMESPACE

#endif

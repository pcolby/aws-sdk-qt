// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTFLEETHUBCLIENT_H
#define QTAWS_IOTFLEETHUBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotfleethubglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubClientPrivate;
class CreateApplicationRequest;
class CreateApplicationResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DescribeApplicationRequest;
class DescribeApplicationResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWSIOTFLEETHUB_EXPORT IoTFleetHubClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTFleetHubClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTFleetHubClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DescribeApplicationResponse * describeApplication(const DescribeApplicationRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTFleetHubClient)
    Q_DISABLE_COPY(IoTFleetHubClient)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif

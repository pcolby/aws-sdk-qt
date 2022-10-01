// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUMCLIENT_H
#define QTAWS_RUMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsrumglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Rum {

class RumClientPrivate;
class CreateAppMonitorRequest;
class CreateAppMonitorResponse;
class DeleteAppMonitorRequest;
class DeleteAppMonitorResponse;
class GetAppMonitorRequest;
class GetAppMonitorResponse;
class GetAppMonitorDataRequest;
class GetAppMonitorDataResponse;
class ListAppMonitorsRequest;
class ListAppMonitorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutRumEventsRequest;
class PutRumEventsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAppMonitorRequest;
class UpdateAppMonitorResponse;

class QTAWSRUM_EXPORT RumClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RumClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RumClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppMonitorResponse * createAppMonitor(const CreateAppMonitorRequest &request);
    DeleteAppMonitorResponse * deleteAppMonitor(const DeleteAppMonitorRequest &request);
    GetAppMonitorResponse * getAppMonitor(const GetAppMonitorRequest &request);
    GetAppMonitorDataResponse * getAppMonitorData(const GetAppMonitorDataRequest &request);
    ListAppMonitorsResponse * listAppMonitors(const ListAppMonitorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutRumEventsResponse * putRumEvents(const PutRumEventsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAppMonitorResponse * updateAppMonitor(const UpdateAppMonitorRequest &request);

private:
    Q_DECLARE_PRIVATE(RumClient)
    Q_DISABLE_COPY(RumClient)

};

} // namespace Rum
} // namespace QtAws

#endif

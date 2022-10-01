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

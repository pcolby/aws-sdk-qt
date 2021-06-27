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

#ifndef QTAWS_APPINTEGRATIONSSERVICECLIENT_H
#define QTAWS_APPINTEGRATIONSSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AppIntegrationsService {

class AppIntegrationsServiceClientPrivate;
class CreateEventIntegrationRequest;
class CreateEventIntegrationResponse;
class DeleteEventIntegrationRequest;
class DeleteEventIntegrationResponse;
class GetEventIntegrationRequest;
class GetEventIntegrationResponse;
class ListEventIntegrationAssociationsRequest;
class ListEventIntegrationAssociationsResponse;
class ListEventIntegrationsRequest;
class ListEventIntegrationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEventIntegrationRequest;
class UpdateEventIntegrationResponse;

class QTAWS_EXPORT AppIntegrationsServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppIntegrationsServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AppIntegrationsServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateEventIntegrationResponse * createEventIntegration(const CreateEventIntegrationRequest &request);
    DeleteEventIntegrationResponse * deleteEventIntegration(const DeleteEventIntegrationRequest &request);
    GetEventIntegrationResponse * getEventIntegration(const GetEventIntegrationRequest &request);
    ListEventIntegrationAssociationsResponse * listEventIntegrationAssociations(const ListEventIntegrationAssociationsRequest &request);
    ListEventIntegrationsResponse * listEventIntegrations(const ListEventIntegrationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEventIntegrationResponse * updateEventIntegration(const UpdateEventIntegrationRequest &request);

protected:
    /// @cond internal
    AppIntegrationsServiceClientPrivate * const d_ptr; ///< Internal d-pointer.
    AppIntegrationsServiceClient(AppIntegrationsServiceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AppIntegrationsServiceClient)
    Q_DISABLE_COPY(AppIntegrationsServiceClient)

};

} // namespace AppIntegrationsService
} // namespace QtAws

#endif

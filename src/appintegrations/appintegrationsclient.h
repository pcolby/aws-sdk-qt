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

#ifndef QTAWS_APPINTEGRATIONSCLIENT_H
#define QTAWS_APPINTEGRATIONSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappintegrationsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppIntegrations {

class AppIntegrationsClientPrivate;
class CreateDataIntegrationRequest;
class CreateDataIntegrationResponse;
class CreateEventIntegrationRequest;
class CreateEventIntegrationResponse;
class DeleteDataIntegrationRequest;
class DeleteDataIntegrationResponse;
class DeleteEventIntegrationRequest;
class DeleteEventIntegrationResponse;
class GetDataIntegrationRequest;
class GetDataIntegrationResponse;
class GetEventIntegrationRequest;
class GetEventIntegrationResponse;
class ListDataIntegrationAssociationsRequest;
class ListDataIntegrationAssociationsResponse;
class ListDataIntegrationsRequest;
class ListDataIntegrationsResponse;
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
class UpdateDataIntegrationRequest;
class UpdateDataIntegrationResponse;
class UpdateEventIntegrationRequest;
class UpdateEventIntegrationResponse;

class QTAWSAPPINTEGRATIONS_EXPORT AppIntegrationsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppIntegrationsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppIntegrationsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDataIntegrationResponse * createDataIntegration(const CreateDataIntegrationRequest &request);
    CreateEventIntegrationResponse * createEventIntegration(const CreateEventIntegrationRequest &request);
    DeleteDataIntegrationResponse * deleteDataIntegration(const DeleteDataIntegrationRequest &request);
    DeleteEventIntegrationResponse * deleteEventIntegration(const DeleteEventIntegrationRequest &request);
    GetDataIntegrationResponse * getDataIntegration(const GetDataIntegrationRequest &request);
    GetEventIntegrationResponse * getEventIntegration(const GetEventIntegrationRequest &request);
    ListDataIntegrationAssociationsResponse * listDataIntegrationAssociations(const ListDataIntegrationAssociationsRequest &request);
    ListDataIntegrationsResponse * listDataIntegrations(const ListDataIntegrationsRequest &request);
    ListEventIntegrationAssociationsResponse * listEventIntegrationAssociations(const ListEventIntegrationAssociationsRequest &request);
    ListEventIntegrationsResponse * listEventIntegrations(const ListEventIntegrationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDataIntegrationResponse * updateDataIntegration(const UpdateDataIntegrationRequest &request);
    UpdateEventIntegrationResponse * updateEventIntegration(const UpdateEventIntegrationRequest &request);

private:
    Q_DECLARE_PRIVATE(AppIntegrationsClient)
    Q_DISABLE_COPY(AppIntegrationsClient)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif

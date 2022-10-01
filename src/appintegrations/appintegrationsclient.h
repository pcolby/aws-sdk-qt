// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

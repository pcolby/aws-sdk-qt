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

#ifndef QTAWS_AMPLIFYUIBUILDERCLIENT_H
#define QTAWS_AMPLIFYUIBUILDERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsamplifyuibuilderglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AmplifyUIBuilder {

class AmplifyUIBuilderClientPrivate;
class CreateComponentRequest;
class CreateComponentResponse;
class CreateFormRequest;
class CreateFormResponse;
class CreateThemeRequest;
class CreateThemeResponse;
class DeleteComponentRequest;
class DeleteComponentResponse;
class DeleteFormRequest;
class DeleteFormResponse;
class DeleteThemeRequest;
class DeleteThemeResponse;
class ExchangeCodeForTokenRequest;
class ExchangeCodeForTokenResponse;
class ExportComponentsRequest;
class ExportComponentsResponse;
class ExportFormsRequest;
class ExportFormsResponse;
class ExportThemesRequest;
class ExportThemesResponse;
class GetComponentRequest;
class GetComponentResponse;
class GetFormRequest;
class GetFormResponse;
class GetMetadataRequest;
class GetMetadataResponse;
class GetThemeRequest;
class GetThemeResponse;
class ListComponentsRequest;
class ListComponentsResponse;
class ListFormsRequest;
class ListFormsResponse;
class ListThemesRequest;
class ListThemesResponse;
class PutMetadataFlagRequest;
class PutMetadataFlagResponse;
class RefreshTokenRequest;
class RefreshTokenResponse;
class UpdateComponentRequest;
class UpdateComponentResponse;
class UpdateFormRequest;
class UpdateFormResponse;
class UpdateThemeRequest;
class UpdateThemeResponse;

class QTAWSAMPLIFYUIBUILDER_EXPORT AmplifyUIBuilderClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AmplifyUIBuilderClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AmplifyUIBuilderClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateComponentResponse * createComponent(const CreateComponentRequest &request);
    CreateFormResponse * createForm(const CreateFormRequest &request);
    CreateThemeResponse * createTheme(const CreateThemeRequest &request);
    DeleteComponentResponse * deleteComponent(const DeleteComponentRequest &request);
    DeleteFormResponse * deleteForm(const DeleteFormRequest &request);
    DeleteThemeResponse * deleteTheme(const DeleteThemeRequest &request);
    ExchangeCodeForTokenResponse * exchangeCodeForToken(const ExchangeCodeForTokenRequest &request);
    ExportComponentsResponse * exportComponents(const ExportComponentsRequest &request);
    ExportFormsResponse * exportForms(const ExportFormsRequest &request);
    ExportThemesResponse * exportThemes(const ExportThemesRequest &request);
    GetComponentResponse * getComponent(const GetComponentRequest &request);
    GetFormResponse * getForm(const GetFormRequest &request);
    GetMetadataResponse * getMetadata(const GetMetadataRequest &request);
    GetThemeResponse * getTheme(const GetThemeRequest &request);
    ListComponentsResponse * listComponents(const ListComponentsRequest &request);
    ListFormsResponse * listForms(const ListFormsRequest &request);
    ListThemesResponse * listThemes(const ListThemesRequest &request);
    PutMetadataFlagResponse * putMetadataFlag(const PutMetadataFlagRequest &request);
    RefreshTokenResponse * refreshToken(const RefreshTokenRequest &request);
    UpdateComponentResponse * updateComponent(const UpdateComponentRequest &request);
    UpdateFormResponse * updateForm(const UpdateFormRequest &request);
    UpdateThemeResponse * updateTheme(const UpdateThemeRequest &request);

private:
    Q_DECLARE_PRIVATE(AmplifyUIBuilderClient)
    Q_DISABLE_COPY(AmplifyUIBuilderClient)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif

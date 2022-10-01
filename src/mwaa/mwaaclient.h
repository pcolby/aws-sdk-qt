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

#ifndef QTAWS_MWAACLIENT_H
#define QTAWS_MWAACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmwaaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Mwaa {

class MwaaClientPrivate;
class CreateCliTokenRequest;
class CreateCliTokenResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class CreateWebLoginTokenRequest;
class CreateWebLoginTokenResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PublishMetricsRequest;
class PublishMetricsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;

class QTAWSMWAA_EXPORT MwaaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MwaaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MwaaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCliTokenResponse * createCliToken(const CreateCliTokenRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    CreateWebLoginTokenResponse * createWebLoginToken(const CreateWebLoginTokenRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PublishMetricsResponse * publishMetrics(const PublishMetricsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);

private:
    Q_DECLARE_PRIVATE(MwaaClient)
    Q_DISABLE_COPY(MwaaClient)

};

} // namespace Mwaa
} // namespace QtAws

#endif

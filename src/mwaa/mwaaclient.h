// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

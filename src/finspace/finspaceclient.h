// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACECLIENT_H
#define QTAWS_FINSPACECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfinspaceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Finspace {

class FinspaceClientPrivate;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;

class QTAWSFINSPACE_EXPORT FinspaceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FinspaceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FinspaceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);

private:
    Q_DECLARE_PRIVATE(FinspaceClient)
    Q_DISABLE_COPY(FinspaceClient)

};

} // namespace Finspace
} // namespace QtAws

#endif

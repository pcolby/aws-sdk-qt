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

#ifndef QTAWS_FINSPACECLIENT_H
#define QTAWS_FINSPACECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfinspaceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace finspace {

class finspaceClientPrivate;
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

class QTAWSFINSPACE_EXPORT finspaceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    finspaceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    finspaceClient(
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

protected:
    /// @cond internal
    finspaceClientPrivate * const d_ptr; ///< Internal d-pointer.
    finspaceClient(finspaceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(finspaceClient)
    Q_DISABLE_COPY(finspaceClient)

};

} // namespace finspace
} // namespace QtAws

#endif

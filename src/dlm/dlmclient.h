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

#ifndef QTAWS_DLMCLIENT_H
#define QTAWS_DLMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdlmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DLM {

class DlmClientPrivate;
class CreateLifecyclePolicyRequest;
class CreateLifecyclePolicyResponse;
class DeleteLifecyclePolicyRequest;
class DeleteLifecyclePolicyResponse;
class GetLifecyclePoliciesRequest;
class GetLifecyclePoliciesResponse;
class GetLifecyclePolicyRequest;
class GetLifecyclePolicyResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLifecyclePolicyRequest;
class UpdateLifecyclePolicyResponse;

class QTAWSDLM_EXPORT DlmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DlmClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DlmClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateLifecyclePolicyResponse * createLifecyclePolicy(const CreateLifecyclePolicyRequest &request);
    DeleteLifecyclePolicyResponse * deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request);
    GetLifecyclePoliciesResponse * getLifecyclePolicies(const GetLifecyclePoliciesRequest &request);
    GetLifecyclePolicyResponse * getLifecyclePolicy(const GetLifecyclePolicyRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLifecyclePolicyResponse * updateLifecyclePolicy(const UpdateLifecyclePolicyRequest &request);

protected:
    /// @cond internal
    DlmClientPrivate * const d_ptr; ///< Internal d-pointer.
    DlmClient(DlmClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DlmClient)
    Q_DISABLE_COPY(DlmClient)

};

} // namespace DLM
} // namespace QtAws

#endif

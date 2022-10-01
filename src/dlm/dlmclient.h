// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DLMCLIENT_H
#define QTAWS_DLMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdlmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Dlm {

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

    explicit DlmClient(
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

private:
    Q_DECLARE_PRIVATE(DlmClient)
    Q_DISABLE_COPY(DlmClient)

};

} // namespace Dlm
} // namespace QtAws

#endif

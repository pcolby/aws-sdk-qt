// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RBINCLIENT_H
#define QTAWS_RBINCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsrbinglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Rbin {

class RbinClientPrivate;
class CreateRuleRequest;
class CreateRuleResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class GetRuleRequest;
class GetRuleResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateRuleRequest;
class UpdateRuleResponse;

class QTAWSRBIN_EXPORT RbinClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RbinClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RbinClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    GetRuleResponse * getRule(const GetRuleRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateRuleResponse * updateRule(const UpdateRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(RbinClient)
    Q_DISABLE_COPY(RbinClient)

};

} // namespace Rbin
} // namespace QtAws

#endif

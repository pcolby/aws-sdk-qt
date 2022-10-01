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

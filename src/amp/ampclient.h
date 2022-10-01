// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPCLIENT_H
#define QTAWS_AMPCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsampglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Amp {

class AmpClientPrivate;
class CreateAlertManagerDefinitionRequest;
class CreateAlertManagerDefinitionResponse;
class CreateLoggingConfigurationRequest;
class CreateLoggingConfigurationResponse;
class CreateRuleGroupsNamespaceRequest;
class CreateRuleGroupsNamespaceResponse;
class CreateWorkspaceRequest;
class CreateWorkspaceResponse;
class DeleteAlertManagerDefinitionRequest;
class DeleteAlertManagerDefinitionResponse;
class DeleteLoggingConfigurationRequest;
class DeleteLoggingConfigurationResponse;
class DeleteRuleGroupsNamespaceRequest;
class DeleteRuleGroupsNamespaceResponse;
class DeleteWorkspaceRequest;
class DeleteWorkspaceResponse;
class DescribeAlertManagerDefinitionRequest;
class DescribeAlertManagerDefinitionResponse;
class DescribeLoggingConfigurationRequest;
class DescribeLoggingConfigurationResponse;
class DescribeRuleGroupsNamespaceRequest;
class DescribeRuleGroupsNamespaceResponse;
class DescribeWorkspaceRequest;
class DescribeWorkspaceResponse;
class ListRuleGroupsNamespacesRequest;
class ListRuleGroupsNamespacesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkspacesRequest;
class ListWorkspacesResponse;
class PutAlertManagerDefinitionRequest;
class PutAlertManagerDefinitionResponse;
class PutRuleGroupsNamespaceRequest;
class PutRuleGroupsNamespaceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLoggingConfigurationRequest;
class UpdateLoggingConfigurationResponse;
class UpdateWorkspaceAliasRequest;
class UpdateWorkspaceAliasResponse;

class QTAWSAMP_EXPORT AmpClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AmpClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AmpClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAlertManagerDefinitionResponse * createAlertManagerDefinition(const CreateAlertManagerDefinitionRequest &request);
    CreateLoggingConfigurationResponse * createLoggingConfiguration(const CreateLoggingConfigurationRequest &request);
    CreateRuleGroupsNamespaceResponse * createRuleGroupsNamespace(const CreateRuleGroupsNamespaceRequest &request);
    CreateWorkspaceResponse * createWorkspace(const CreateWorkspaceRequest &request);
    DeleteAlertManagerDefinitionResponse * deleteAlertManagerDefinition(const DeleteAlertManagerDefinitionRequest &request);
    DeleteLoggingConfigurationResponse * deleteLoggingConfiguration(const DeleteLoggingConfigurationRequest &request);
    DeleteRuleGroupsNamespaceResponse * deleteRuleGroupsNamespace(const DeleteRuleGroupsNamespaceRequest &request);
    DeleteWorkspaceResponse * deleteWorkspace(const DeleteWorkspaceRequest &request);
    DescribeAlertManagerDefinitionResponse * describeAlertManagerDefinition(const DescribeAlertManagerDefinitionRequest &request);
    DescribeLoggingConfigurationResponse * describeLoggingConfiguration(const DescribeLoggingConfigurationRequest &request);
    DescribeRuleGroupsNamespaceResponse * describeRuleGroupsNamespace(const DescribeRuleGroupsNamespaceRequest &request);
    DescribeWorkspaceResponse * describeWorkspace(const DescribeWorkspaceRequest &request);
    ListRuleGroupsNamespacesResponse * listRuleGroupsNamespaces(const ListRuleGroupsNamespacesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkspacesResponse * listWorkspaces(const ListWorkspacesRequest &request);
    PutAlertManagerDefinitionResponse * putAlertManagerDefinition(const PutAlertManagerDefinitionRequest &request);
    PutRuleGroupsNamespaceResponse * putRuleGroupsNamespace(const PutRuleGroupsNamespaceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLoggingConfigurationResponse * updateLoggingConfiguration(const UpdateLoggingConfigurationRequest &request);
    UpdateWorkspaceAliasResponse * updateWorkspaceAlias(const UpdateWorkspaceAliasRequest &request);

private:
    Q_DECLARE_PRIVATE(AmpClient)
    Q_DISABLE_COPY(AmpClient)

};

} // namespace Amp
} // namespace QtAws

#endif

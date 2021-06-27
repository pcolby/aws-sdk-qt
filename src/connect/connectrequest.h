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

#ifndef QTAWS_CONNECTREQUEST_H
#define QTAWS_CONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Connect {

class ConnectRequestPrivate;

class QTAWS_EXPORT ConnectRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Connect.
    enum Action {
        AssociateApprovedOriginAction,
        AssociateBotAction,
        AssociateInstanceStorageConfigAction,
        AssociateLambdaFunctionAction,
        AssociateLexBotAction,
        AssociateQueueQuickConnectsAction,
        AssociateRoutingProfileQueuesAction,
        AssociateSecurityKeyAction,
        CreateContactFlowAction,
        CreateInstanceAction,
        CreateIntegrationAssociationAction,
        CreateQueueAction,
        CreateQuickConnectAction,
        CreateRoutingProfileAction,
        CreateUseCaseAction,
        CreateUserAction,
        CreateUserHierarchyGroupAction,
        DeleteInstanceAction,
        DeleteIntegrationAssociationAction,
        DeleteQuickConnectAction,
        DeleteUseCaseAction,
        DeleteUserAction,
        DeleteUserHierarchyGroupAction,
        DescribeContactFlowAction,
        DescribeHoursOfOperationAction,
        DescribeInstanceAction,
        DescribeInstanceAttributeAction,
        DescribeInstanceStorageConfigAction,
        DescribeQueueAction,
        DescribeQuickConnectAction,
        DescribeRoutingProfileAction,
        DescribeUserAction,
        DescribeUserHierarchyGroupAction,
        DescribeUserHierarchyStructureAction,
        DisassociateApprovedOriginAction,
        DisassociateBotAction,
        DisassociateInstanceStorageConfigAction,
        DisassociateLambdaFunctionAction,
        DisassociateLexBotAction,
        DisassociateQueueQuickConnectsAction,
        DisassociateRoutingProfileQueuesAction,
        DisassociateSecurityKeyAction,
        GetContactAttributesAction,
        GetCurrentMetricDataAction,
        GetFederationTokenAction,
        GetMetricDataAction,
        ListApprovedOriginsAction,
        ListBotsAction,
        ListContactFlowsAction,
        ListHoursOfOperationsAction,
        ListInstanceAttributesAction,
        ListInstanceStorageConfigsAction,
        ListInstancesAction,
        ListIntegrationAssociationsAction,
        ListLambdaFunctionsAction,
        ListLexBotsAction,
        ListPhoneNumbersAction,
        ListPromptsAction,
        ListQueueQuickConnectsAction,
        ListQueuesAction,
        ListQuickConnectsAction,
        ListRoutingProfileQueuesAction,
        ListRoutingProfilesAction,
        ListSecurityKeysAction,
        ListSecurityProfilesAction,
        ListTagsForResourceAction,
        ListUseCasesAction,
        ListUserHierarchyGroupsAction,
        ListUsersAction,
        ResumeContactRecordingAction,
        StartChatContactAction,
        StartContactRecordingAction,
        StartOutboundVoiceContactAction,
        StartTaskContactAction,
        StopContactAction,
        StopContactRecordingAction,
        SuspendContactRecordingAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateContactAttributesAction,
        UpdateContactFlowContentAction,
        UpdateContactFlowNameAction,
        UpdateInstanceAttributeAction,
        UpdateInstanceStorageConfigAction,
        UpdateQueueHoursOfOperationAction,
        UpdateQueueMaxContactsAction,
        UpdateQueueNameAction,
        UpdateQueueOutboundCallerConfigAction,
        UpdateQueueStatusAction,
        UpdateQuickConnectConfigAction,
        UpdateQuickConnectNameAction,
        UpdateRoutingProfileConcurrencyAction,
        UpdateRoutingProfileDefaultOutboundQueueAction,
        UpdateRoutingProfileNameAction,
        UpdateRoutingProfileQueuesAction,
        UpdateUserHierarchyAction,
        UpdateUserHierarchyGroupNameAction,
        UpdateUserHierarchyStructureAction,
        UpdateUserIdentityInfoAction,
        UpdateUserPhoneConfigAction,
        UpdateUserRoutingProfileAction,
        UpdateUserSecurityProfilesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ConnectRequest(const Action action);
    ConnectRequest(const ConnectRequest &other);
    ConnectRequest &operator=(const ConnectRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ConnectRequest &other) const;


protected:
    /// @cond internal
    ConnectRequestPrivate * const d_ptr; ///< Internal d-pointer.
    ConnectRequest(ConnectRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

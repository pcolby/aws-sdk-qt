// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSADDPERMISSIONREQUEST_H
#define SQSADDPERMISSIONREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsAddPermissionRequestPrivate;

class QTAWS_EXPORT SqsAddPermissionRequest : public SqsRequest {

public:
    /// The subset of SQS actions that may be used with the AddPermission action.
    enum PermissibleAction {
        SendMessageAction             = SqsRequest::SendMessageAction,
        ReceiveMessageAction          = SqsRequest::ReceiveMessageAction,
        DeleteMessageAction           = SqsRequest::DeleteMessageAction,
        ChangeMessageVisibilityAction = SqsRequest::ChangeMessageVisibilityAction,
        GetQueueAttributesAction      = SqsRequest::GetQueueAttributesAction,
        GetQueueUrlAction             = SqsRequest::GetQueueUrlAction
    };
    Q_DECLARE_FLAGS(PermissibleActions, PermissibleAction)

    /// Map of principals (aka accountIds) to their permissions.
    typedef QMap<QString, PermissibleActions> PermissionsMap;

    SqsAddPermissionRequest(const QString &label,
                            const PermissionsMap &permissions = PermissionsMap(),
                            const QString &queueUrl = QString());
    SqsAddPermissionRequest(const SqsAddPermissionRequest &other);
    SqsAddPermissionRequest();

    virtual bool isValid() const;

    QString label() const;
    PermissibleActions permissions(const QString &accountId) const;
    PermissionsMap permissions() const;
    QString queueUrl() const;

    void setLabel(const QString &label);
    void setQueueUrl(const QString &queueUrl);

    void setPermission(const QString &accountId, const PermissibleAction action,
                       const bool permitted = true);
    void setPermissions(const QString &accountId, const PermissibleActions &actions);
    void setPermissions(const PermissionsMap &permissions);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsAddPermissionRequest)
    friend class TestSqsAddPermissionRequest;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(SqsAddPermissionRequest::PermissibleActions)

} // namespace SqsOld
} // namespace QtAws

#endif

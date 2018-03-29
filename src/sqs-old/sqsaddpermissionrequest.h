/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSADDPERMISSIONREQUEST_H
#define SQSADDPERMISSIONREQUEST_H

#include "sqsrequest.h"

QTAWS_BEGIN_NAMESPACE

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

QTAWS_END_NAMESPACE

#endif

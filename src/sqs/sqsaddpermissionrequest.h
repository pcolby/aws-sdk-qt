/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSADDPERMISSIONREQUEST_H
#define SQSADDPERMISSIONREQUEST_H

#include "sqsrequest.h"

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT SqsAddPermissionRequest : public SqsRequest {

public:
    /// The subset of SQS actions that may be used with the AddPermission action.
    enum PermissibleAction {
        SendMessageSqsAction = SqsRequest::SendMessageSqsAction,
        ReceiveMessageSqsAction = SqsRequest::ReceiveMessageSqsAction,
        DeleteMessageSqsAction = SqsRequest::DeleteMessageSqsAction,
        ChangeMessageVisibilitySqsAction = SqsRequest::ChangeMessageVisibilitySqsAction,
        GetQueueAttributesSqsAction = SqsRequest::GetQueueAttributesSqsAction,
        GetQueueUrlSqsAction = SqsRequest::GetQueueUrlSqsAction,
        AllPermissibleActions = 0xFF ///< Translates to wildcard ("*") for SQS.
    };

    SqsAddPermissionRequest(const QString &queueUrl,
                            const QString &label = QString(),
                            const QVariantMap &permissions = QVariantMap());
    SqsAddPermissionRequest(const SqsAddPermissionRequest &other);
    SqsAddPermissionRequest();

    virtual bool isValid() const;

    QString label() const;
    QVariantMap permissions() const;
    QString queueUrl() const;

    void addPermission(const QString &accountId, const PermissibleAction action);
    void addPermission(const QString &accountId, const QString &actionName);

    void setLabel(const QString &label);
    void setQueueUrl(const QString &queueUrl);

    void setPermission(const QString &accountId, const PermissibleAction action);
    void setPermission(const QString &accountId, const QString &actionName);
    void setPermissions(const QVariantMap &permissions);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

    friend class TestSqsAddPermissionRequest;
};

QTAWS_END_NAMESPACE

#endif

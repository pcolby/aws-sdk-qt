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

#ifndef SQSREQUEST_H
#define SQSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QObject>

class QNetworkRequest;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class SqsRequestPrivate;

class QTAWS_EXPORT SqsRequest : public AwsAbstractRequest {
    Q_OBJECT

public:
    /// Actions supported by SQS.
    enum SqsAction {
        AddPermissionSqsAction,
        ChangeMessageVisibilitySqsAction,
        ChangeMessageVisibilityBatchSqsAction,
        CreateQueueSqsAction,
        DreateQueueSqsAction,
        DeleteMessageSqsAction,
        DeleteMessageBatchSqsAction,
        DeleteQueueSqsAction,
        GetQueueAttributesSqsAction,
        GetQueueUrlSqsAction,
        ListDeadLetterSourceQueuesSqsAction,
        ListQueuesSqsAction,
        PurgeQueueSqsAction,
        ReceiveMessageSqsAction,
        RemovePermissionSqsAction,
        SendMessageSqsAction,
        SendMessageBatchSqsAction,
        SetQueueAttributesSqsAction
    };

    SqsRequest(const SqsAction action, QObject * const parent = 0);

    SqsAction action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const SqsAction action);
    void setApiVersion(const QString &version);

protected:
    /// @cond internal
    SqsRequest(SqsRequestPrivate * const d, QObject * const parent);
    /// @endcond

    int clearParameter(const QString &name);
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    void setParameter(const QString &name, const QVariant &value);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(SqsRequest)
    Q_DISABLE_COPY(SqsRequest)

};

QTAWS_END_NAMESPACE

#endif

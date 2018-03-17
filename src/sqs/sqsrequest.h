/*
    Copyright 2013-2018 Paul Colby

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

#include <QFlags>
#include <QObject>

class QNetworkRequest;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class SqsRequestPrivate;

class QTAWS_EXPORT SqsRequest : public AwsAbstractRequest {

public:
    /// Actions supported by SQS.
    enum Action {
        AddPermissionAction                = 0x00001,
        ChangeMessageVisibilityAction      = 0x00002,
        ChangeMessageVisibilityBatchAction = 0x00004,
        CreateQueueAction                  = 0x00008,
        DeleteMessageAction                = 0x00010,
        DeleteMessageBatchAction           = 0x00020,
        DeleteQueueAction                  = 0x00040,
        GetQueueAttributesAction           = 0x00080,
        GetQueueUrlAction                  = 0x00100,
        ListDeadLetterSourceQueuesAction   = 0x00200,
        ListQueuesAction                   = 0x00400,
        PurgeQueueAction                   = 0x00800,
        ReceiveMessageAction               = 0x01000,
        RemovePermissionAction             = 0x02000,
        SendMessageAction                  = 0x04000,
        SendMessageBatchAction             = 0x08000,
        SetQueueAttributesAction           = 0x10000
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SqsRequest(const Action action);
    SqsRequest(const SqsRequest &other);
    SqsRequest &operator=(const SqsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SqsRequest &other) const;

    static bool isValidQueueName(const QString &queueName);

protected:
    /// @cond internal
    SqsRequest(SqsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(SqsRequest)
    friend class TestSqsRequest;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(SqsRequest::Actions)

QTAWS_END_NAMESPACE

#endif

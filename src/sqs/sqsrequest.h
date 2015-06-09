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

#include "awsabstractrequest.h"

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

    SqsRequest(QObject * const parent = 0);

    virtual ~SqsRequest();

    SqsAction action() const;
    /// @todo  auth params.
    QString apiVersion() const;
    QNetworkRequest request() const;

    bool isValid() const;

    void setAction(const SqsAction action);
    void setApiVersion(const QString &version);

protected:
    virtual QNetworkRequest unsignedRequest() const;

private:
    Q_DECLARE_PRIVATE(SqsRequest)
    SqsRequestPrivate * const d_ptr; ///< Internal d-pointer.

};

QTAWS_END_NAMESPACE

#endif

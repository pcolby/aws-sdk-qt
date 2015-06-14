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

#ifndef SQSCREATEQUEUEREQUEST_H
#define SQSCREATEQUEUEREQUEST_H

#include "sqsrequest.h"

class QNetworkRequest;

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT SqsCreateQueueRequest : public SqsRequest {
    Q_OBJECT

public:
    SqsCreateQueueRequest(const QString &queueName, QObject * const parent = 0);
    SqsCreateQueueRequest(QObject * const parent);

    virtual bool isValid() const;

    QVariant attribute(const QString &name, const QVariant &defaultValue = QVariant()) const;
    QVariantMap attributes() const;

    int delaySeconds() const;
    int maximumMessageSize() const;
    int messageRetentionPeriod() const;
    QString policy() const;
    QString queueName() const;
    int receiveMessageWaitTimeSeconds() const;
    int visibilityTimeout() const;

    void setAttribute(const QString &name, const QVariant &value);
    void setAttributes(const QVariantMap &attributes);

    void setDelaySeconds(int delay);
    void setMaximumMessageSize(int size);
    void setMessageRetentionPeriod(int period);
    void setPolicy(const QString &policy);
    /// @todo add setPolicy overload that takes an AwsPolicy object reference.
    void setQueueName(const QString &queueName);
    void setReceiveMessageWaitTimeSeconds(int time);
    void setVisibilityTimeout(int timeout);

protected:
    virtual AwsAbstractResponse * parseResponse(QNetworkReply * const reply);

};

QTAWS_END_NAMESPACE

#endif

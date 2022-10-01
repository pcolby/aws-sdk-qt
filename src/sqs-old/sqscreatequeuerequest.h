// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCREATEQUEUEREQUEST_H
#define SQSCREATEQUEUEREQUEST_H

#include "sqsrequest.h"

class QNetworkRequest;

namespace QtAws {
namespace SqsOld {

class SqsCreateQueueRequestPrivate;

class QTAWS_EXPORT SqsCreateQueueRequest : public SqsRequest {

public:
    SqsCreateQueueRequest(const QString &queueName);
    SqsCreateQueueRequest(const SqsCreateQueueRequest &other);
    SqsCreateQueueRequest();

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
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsCreateQueueRequest)
    friend class TestSqsCreateQueueRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

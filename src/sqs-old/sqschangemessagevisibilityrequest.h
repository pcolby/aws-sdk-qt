// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYREQUEST_H
#define SQSCHANGEMESSAGEVISIBILITYREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityRequestPrivate;

class QTAWS_EXPORT SqsChangeMessageVisibilityRequest : public SqsRequest {

public:
    SqsChangeMessageVisibilityRequest(const QString &queueUrl,
                                      const QString &receiptHandle,
                                      const int visbilityTimeout);
    SqsChangeMessageVisibilityRequest(const SqsChangeMessageVisibilityRequest &other);
    SqsChangeMessageVisibilityRequest();

    virtual bool isValid() const;

    QString queueUrl() const;
    QString receiptHandle() const;
    int visibilityTimeout() const;

    void setQueueUrl(const QString &queueUrl);
    void setReceiptHandle(const QString &receiptHandle);
    void setVisibilityTimeout(const int timeout);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsChangeMessageVisibilityRequest)
    friend class TestSqsChangeMessageVisibilityRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

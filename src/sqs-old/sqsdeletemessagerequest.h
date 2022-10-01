// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGEREQUEST_H
#define SQSDELETEMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageRequestPrivate;

class QTAWS_EXPORT SqsDeleteMessageRequest : public SqsRequest {

public:
    SqsDeleteMessageRequest(const QString &queueUrl, const QString &receiptHandle);
    SqsDeleteMessageRequest(const SqsDeleteMessageRequest &other);
    SqsDeleteMessageRequest();

    virtual bool isValid() const;

    QString queueUrl() const;
    QString receiptHandle() const;

    void setQueueUrl(const QString &queueUrl);
    void setReceiptHandle(const QString &receiptHandle);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsDeleteMessageRequest)
    friend class TestSqsDeleteMessageRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

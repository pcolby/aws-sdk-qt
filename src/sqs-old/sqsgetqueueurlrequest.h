// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEURLREQUEST_H
#define SQSGETQUEUEURLREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueUrlRequestPrivate;

class QTAWS_EXPORT SqsGetQueueUrlRequest : public SqsRequest {

public:
    SqsGetQueueUrlRequest(const QString &queueName,
                          const QString &queueOwnerAWSAccountId = QString());
    SqsGetQueueUrlRequest(const SqsGetQueueUrlRequest &other);
    SqsGetQueueUrlRequest();

    virtual bool isValid() const;

    QString queueName() const;
    QString queueOwnerAWSAccountId() const;

    void setQueueName(const QString &queueName);
    void setQueueOwnerAWSAccountId(const QString &queueOwnerAWSAccountId);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsGetQueueUrlRequest)
    friend class TestSqsGetQueueUrlRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

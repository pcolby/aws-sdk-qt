// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTDEADLETTERSOURCEQUEUESREQUEST_H
#define SQSLISTDEADLETTERSOURCEQUEUESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsListDeadLetterSourceQueuesRequestPrivate;

class QTAWS_EXPORT SqsListDeadLetterSourceQueuesRequest : public SqsRequest {

public:
    SqsListDeadLetterSourceQueuesRequest(const QString &queueUrl);
    SqsListDeadLetterSourceQueuesRequest(const SqsListDeadLetterSourceQueuesRequest &other);
    SqsListDeadLetterSourceQueuesRequest();

    virtual bool isValid() const;

    QString queueUrl() const;

    void setQueueUrl(const QString &queueUrl);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsListDeadLetterSourceQueuesRequest)
    friend class TestSqsListDeadLetterSourceQueuesRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

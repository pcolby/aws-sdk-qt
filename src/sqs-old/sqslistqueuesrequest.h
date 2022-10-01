// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTQUEUESREQUEST_H
#define SQSLISTQUEUESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsListQueuesRequestPrivate;

class QTAWS_EXPORT SqsListQueuesRequest : public SqsRequest {

public:
    SqsListQueuesRequest(const QString &queueNamePrefix);
    SqsListQueuesRequest(const SqsListQueuesRequest &other);
    SqsListQueuesRequest();

    virtual bool isValid() const;

    QString queueNamePrefix() const;

    void setQueueNamePrefix(const QString &queueNamePrefix);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsListQueuesRequest)
    friend class TestSqsListQueuesRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEQUEUEREQUEST_H
#define SQSDELETEQUEUEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteQueueRequestPrivate;

class QTAWS_EXPORT SqsDeleteQueueRequest : public SqsRequest {

public:
    SqsDeleteQueueRequest(const QString &queueUrl);
    SqsDeleteQueueRequest(const SqsDeleteQueueRequest &other);
    SqsDeleteQueueRequest();

    virtual bool isValid() const;

    QString queueUrl() const;

    void setQueueUrl(const QString &queueUrl);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsDeleteQueueRequest)
    friend class TestSqsDeleteQueueRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

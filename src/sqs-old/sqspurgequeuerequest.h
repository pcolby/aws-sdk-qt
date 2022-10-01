// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSPURGEQUEUEREQUEST_H
#define SQSPURGEQUEUEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsPurgeQueueRequestPrivate;

class QTAWS_EXPORT SqsPurgeQueueRequest : public SqsRequest {

public:
    SqsPurgeQueueRequest(const QString &queueUrl);
    SqsPurgeQueueRequest(const SqsPurgeQueueRequest &other);
    SqsPurgeQueueRequest();

    virtual bool isValid() const;

    QString queueUrl() const;

    void setQueueUrl(const QString &queueUrl);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsPurgeQueueRequest)
    friend class TestSqsPurgeQueueRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif

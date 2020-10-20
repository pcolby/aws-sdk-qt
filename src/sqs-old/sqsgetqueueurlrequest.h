/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

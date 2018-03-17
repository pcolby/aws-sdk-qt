/*
    Copyright 2013-2018 Paul Colby

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

#ifndef SQSCHANGEMESSAGEVISIBILITYREQUEST_H
#define SQSCHANGEMESSAGEVISIBILITYREQUEST_H

#include "sqsrequest.h"

QTAWS_BEGIN_NAMESPACE

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

QTAWS_END_NAMESPACE

#endif

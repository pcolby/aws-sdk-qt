/*
    Copyright 2013-2015 Paul Colby

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

#ifndef SQSPURGEQUEUEREQUEST_H
#define SQSPURGEQUEUEREQUEST_H

#include "sqsrequest.h"

QTAWS_BEGIN_NAMESPACE

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

QTAWS_END_NAMESPACE

#endif

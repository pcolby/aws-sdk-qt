/*
    Copyright 2013-2018 Paul Colby

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

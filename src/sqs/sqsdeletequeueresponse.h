/*
    Copyright 2013-2016 Paul Colby

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

#ifndef SQSDELETEQUEUE_H
#define SQSDELETEQUEUE_H

#include "sqsdeletequeuerequest.h"
#include "sqsresponse.h"

QTAWS_BEGIN_NAMESPACE

class SqsDeleteQueueResponsePrivate;

class QTAWS_EXPORT SqsDeleteQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsDeleteQueueResponse(const SqsDeleteQueueRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsDeleteQueueRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsDeleteQueueResponse)
    Q_DISABLE_COPY(SqsDeleteQueueResponse)
    friend class TestSqsDeleteQueueResponse;
};

QTAWS_END_NAMESPACE

#endif

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

#ifndef SQSPURGEQUEUE_H
#define SQSPURGEQUEUE_H

#include "sqspurgequeuerequest.h"
#include "sqsresponse.h"

QTAWS_BEGIN_NAMESPACE

class SqsPurgeQueueResponsePrivate;

class QTAWS_EXPORT SqsPurgeQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsPurgeQueueResponse(const SqsPurgeQueueRequest &request,
                          QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsPurgeQueueRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsPurgeQueueResponse)
    Q_DISABLE_COPY(SqsPurgeQueueResponse)
    friend class TestSqsPurgeQueueResponse;
};

QTAWS_END_NAMESPACE

#endif

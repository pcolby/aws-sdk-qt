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

#ifndef SQSCREATEQUEUERESPONSE_H
#define SQSCREATEQUEUERESPONSE_H

#include "sqscreatequeuerequest.h"
#include "sqsresponse.h"

QTAWS_BEGIN_NAMESPACE

class SqsCreateQueueResponsePrivate;

class QTAWS_EXPORT SqsCreateQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsCreateQueueResponse(const SqsCreateQueueRequest &request,
                           QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsCreateQueueRequest * request() const;

    QString queueUrl() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsCreateQueueResponse)
    Q_DISABLE_COPY(SqsCreateQueueResponse)
    friend class TestSqsCreateQueueResponse;
};

QTAWS_END_NAMESPACE

#endif

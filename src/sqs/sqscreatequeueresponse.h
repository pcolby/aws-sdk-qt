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

#include "sqsresponse.h"

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class SqsCreateQueueResponsePrivate;

class QTAWS_EXPORT SqsCreateQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsCreateQueueResponse(QNetworkReply * const reply, QObject * const parent = 0);

    virtual ~SqsCreateQueueResponse();

    virtual bool isValid() const;

    QString queueUrl() const;

protected slots:
    virtual bool parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsCreateQueueResponse)
    SqsCreateQueueResponsePrivate * const d_ptr; ///< Internal d-pointer.

};

QTAWS_END_NAMESPACE

#endif

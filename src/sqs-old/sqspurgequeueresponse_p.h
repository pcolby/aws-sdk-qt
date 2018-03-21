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

#ifndef SQSPURGEQUEUERESPONSE_P_H
#define SQSPURGEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

QTAWS_BEGIN_NAMESPACE

class SqsPurgeQueueResponse;

class QTAWS_EXPORT SqsPurgeQueueResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsPurgeQueueResponsePrivate(SqsPurgeQueueResponse * const q);

    void parsePurgeQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsPurgeQueueResponse)
    Q_DISABLE_COPY(SqsPurgeQueueResponsePrivate)

};

QTAWS_END_NAMESPACE

#endif

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

#ifndef SQSSENDMESSAGEBATCHRESPONSE_P_H
#define SQSSENDMESSAGEBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

QTAWS_BEGIN_NAMESPACE

class SqsSendMessageBatchResponse;

class QTAWS_EXPORT SqsSendMessageBatchResponsePrivate : public SqsResponsePrivate {

public:
    SqsSendMessageBatchResponsePrivate(SqsSendMessageBatchResponse * const q);

    void parseSendMessageBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsSendMessageBatchResponse)
    Q_DISABLE_COPY(SqsSendMessageBatchResponsePrivate)

};

QTAWS_END_NAMESPACE

#endif

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

#ifndef QTAWS_DESCRIBESTREAMRESPONSE_P_H
#define QTAWS_DESCRIBESTREAMRESPONSE_P_H

#include "kinesisvideoresponse.h"
#include "describestreamrequest.h"

namespace AWS {

namespace KinesisVideo {

class DescribeStreamResponse;

class QTAWS_EXPORT DescribeStreamResponsePrivate : public KinesisVideoResponsePrivate {
    Q_OBJECT

public:

    DescribeStreamResponsePrivate(DescribeStreamResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStreamResponse)
    Q_DISABLE_COPY(DescribeStreamResponsePrivate)

};

} // namespace KinesisVideo
} // namespace AWS

#endif

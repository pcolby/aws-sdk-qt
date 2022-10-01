// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMRESPONSE_P_H
#define QTAWS_DESCRIBESTREAMRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeStreamResponse;

class DescribeStreamResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit DescribeStreamResponsePrivate(DescribeStreamResponse * const q);

    void parseDescribeStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStreamResponse)
    Q_DISABLE_COPY(DescribeStreamResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMCONSUMERRESPONSE_P_H
#define QTAWS_DESCRIBESTREAMCONSUMERRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamConsumerResponse;

class DescribeStreamConsumerResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DescribeStreamConsumerResponsePrivate(DescribeStreamConsumerResponse * const q);

    void parseDescribeStreamConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStreamConsumerResponse)
    Q_DISABLE_COPY(DescribeStreamConsumerResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif

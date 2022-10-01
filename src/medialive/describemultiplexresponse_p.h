// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXRESPONSE_P_H
#define QTAWS_DESCRIBEMULTIPLEXRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexResponse;

class DescribeMultiplexResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeMultiplexResponsePrivate(DescribeMultiplexResponse * const q);

    void parseDescribeMultiplexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMultiplexResponse)
    Q_DISABLE_COPY(DescribeMultiplexResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeChannelResponse;

class DescribeChannelResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeChannelResponsePrivate(DescribeChannelResponse * const q);

    void parseDescribeChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelResponse)
    Q_DISABLE_COPY(DescribeChannelResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

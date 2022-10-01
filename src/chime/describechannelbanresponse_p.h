// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELBANRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELBANRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DescribeChannelBanResponse;

class DescribeChannelBanResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DescribeChannelBanResponsePrivate(DescribeChannelBanResponse * const q);

    void parseDescribeChannelBanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelBanResponse)
    Q_DISABLE_COPY(DescribeChannelBanResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

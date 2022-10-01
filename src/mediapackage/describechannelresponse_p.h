// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class DescribeChannelResponse;

class DescribeChannelResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit DescribeChannelResponsePrivate(DescribeChannelResponse * const q);

    void parseDescribeChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelResponse)
    Q_DISABLE_COPY(DescribeChannelResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

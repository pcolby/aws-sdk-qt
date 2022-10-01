// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICETHUMBNAILRESPONSE_P_H
#define QTAWS_DESCRIBEINPUTDEVICETHUMBNAILRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceThumbnailResponse;

class DescribeInputDeviceThumbnailResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeInputDeviceThumbnailResponsePrivate(DescribeInputDeviceThumbnailResponse * const q);

    void parseDescribeInputDeviceThumbnailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInputDeviceThumbnailResponse)
    Q_DISABLE_COPY(DescribeInputDeviceThumbnailResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

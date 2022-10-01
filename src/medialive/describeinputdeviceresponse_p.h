// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICERESPONSE_P_H
#define QTAWS_DESCRIBEINPUTDEVICERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceResponse;

class DescribeInputDeviceResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeInputDeviceResponsePrivate(DescribeInputDeviceResponse * const q);

    void parseDescribeInputDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInputDeviceResponse)
    Q_DISABLE_COPY(DescribeInputDeviceResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

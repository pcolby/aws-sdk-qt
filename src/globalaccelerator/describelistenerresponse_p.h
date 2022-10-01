// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERRESPONSE_P_H
#define QTAWS_DESCRIBELISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeListenerResponse;

class DescribeListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeListenerResponsePrivate(DescribeListenerResponse * const q);

    void parseDescribeListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeListenerResponse)
    Q_DISABLE_COPY(DescribeListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

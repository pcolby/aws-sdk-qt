// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORRESPONSE_P_H
#define QTAWS_DESCRIBEACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorResponse;

class DescribeAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeAcceleratorResponsePrivate(DescribeAcceleratorResponse * const q);

    void parseDescribeAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorResponse)
    Q_DISABLE_COPY(DescribeAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

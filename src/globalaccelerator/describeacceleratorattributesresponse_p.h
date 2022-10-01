// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEACCELERATORATTRIBUTESRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorAttributesResponse;

class DescribeAcceleratorAttributesResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeAcceleratorAttributesResponsePrivate(DescribeAcceleratorAttributesResponse * const q);

    void parseDescribeAcceleratorAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorAttributesResponse)
    Q_DISABLE_COPY(DescribeAcceleratorAttributesResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

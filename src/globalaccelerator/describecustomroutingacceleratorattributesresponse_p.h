// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorAttributesResponse;

class DescribeCustomRoutingAcceleratorAttributesResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeCustomRoutingAcceleratorAttributesResponsePrivate(DescribeCustomRoutingAcceleratorAttributesResponse * const q);

    void parseDescribeCustomRoutingAcceleratorAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingAcceleratorAttributesResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingAcceleratorAttributesResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorResponse;

class DescribeCustomRoutingAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeCustomRoutingAcceleratorResponsePrivate(DescribeCustomRoutingAcceleratorResponse * const q);

    void parseDescribeCustomRoutingAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

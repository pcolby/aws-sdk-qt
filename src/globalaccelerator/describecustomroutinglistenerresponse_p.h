// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGLISTENERRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGLISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingListenerResponse;

class DescribeCustomRoutingListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeCustomRoutingListenerResponsePrivate(DescribeCustomRoutingListenerResponse * const q);

    void parseDescribeCustomRoutingListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingListenerResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

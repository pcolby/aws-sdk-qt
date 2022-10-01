// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeFleetResponse;

class DescribeFleetResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeFleetResponsePrivate(DescribeFleetResponse * const q);

    void parseDescribeFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetResponse)
    Q_DISABLE_COPY(DescribeFleetResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

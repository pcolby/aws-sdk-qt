// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONAPPLICATIONRESPONSE_P_H
#define QTAWS_DESCRIBESIMULATIONAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationApplicationResponse;

class DescribeSimulationApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeSimulationApplicationResponsePrivate(DescribeSimulationApplicationResponse * const q);

    void parseDescribeSimulationApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSimulationApplicationResponse)
    Q_DISABLE_COPY(DescribeSimulationApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBESIMULATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobResponse;

class DescribeSimulationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeSimulationJobResponsePrivate(DescribeSimulationJobResponse * const q);

    void parseDescribeSimulationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSimulationJobResponse)
    Q_DISABLE_COPY(DescribeSimulationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

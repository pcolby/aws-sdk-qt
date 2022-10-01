// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBBATCHRESPONSE_P_H
#define QTAWS_DESCRIBESIMULATIONJOBBATCHRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobBatchResponse;

class DescribeSimulationJobBatchResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeSimulationJobBatchResponsePrivate(DescribeSimulationJobBatchResponse * const q);

    void parseDescribeSimulationJobBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSimulationJobBatchResponse)
    Q_DISABLE_COPY(DescribeSimulationJobBatchResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

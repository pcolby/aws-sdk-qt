// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELANALYSISRESPONSE_P_H
#define QTAWS_DESCRIBEDETECTORMODELANALYSISRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelAnalysisResponse;

class DescribeDetectorModelAnalysisResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DescribeDetectorModelAnalysisResponsePrivate(DescribeDetectorModelAnalysisResponse * const q);

    void parseDescribeDetectorModelAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorModelAnalysisResponse)
    Q_DISABLE_COPY(DescribeDetectorModelAnalysisResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

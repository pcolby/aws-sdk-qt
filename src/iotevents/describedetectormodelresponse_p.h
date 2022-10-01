// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELRESPONSE_P_H
#define QTAWS_DESCRIBEDETECTORMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelResponse;

class DescribeDetectorModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DescribeDetectorModelResponsePrivate(DescribeDetectorModelResponse * const q);

    void parseDescribeDetectorModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorModelResponse)
    Q_DISABLE_COPY(DescribeDetectorModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

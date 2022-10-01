// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELANALYSISREQUEST_P_H
#define QTAWS_DESCRIBEDETECTORMODELANALYSISREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "describedetectormodelanalysisrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelAnalysisRequest;

class DescribeDetectorModelAnalysisRequestPrivate : public IoTEventsRequestPrivate {

public:
    DescribeDetectorModelAnalysisRequestPrivate(const IoTEventsRequest::Action action,
                                   DescribeDetectorModelAnalysisRequest * const q);
    DescribeDetectorModelAnalysisRequestPrivate(const DescribeDetectorModelAnalysisRequestPrivate &other,
                                   DescribeDetectorModelAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorModelAnalysisRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

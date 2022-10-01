// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORMODELANALYSISRESULTSREQUEST_P_H
#define QTAWS_GETDETECTORMODELANALYSISRESULTSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "getdetectormodelanalysisresultsrequest.h"

namespace QtAws {
namespace IoTEvents {

class GetDetectorModelAnalysisResultsRequest;

class GetDetectorModelAnalysisResultsRequestPrivate : public IoTEventsRequestPrivate {

public:
    GetDetectorModelAnalysisResultsRequestPrivate(const IoTEventsRequest::Action action,
                                   GetDetectorModelAnalysisResultsRequest * const q);
    GetDetectorModelAnalysisResultsRequestPrivate(const GetDetectorModelAnalysisResultsRequestPrivate &other,
                                   GetDetectorModelAnalysisResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDetectorModelAnalysisResultsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTORMODELANALYSISREQUEST_P_H
#define QTAWS_STARTDETECTORMODELANALYSISREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "startdetectormodelanalysisrequest.h"

namespace QtAws {
namespace IoTEvents {

class StartDetectorModelAnalysisRequest;

class StartDetectorModelAnalysisRequestPrivate : public IoTEventsRequestPrivate {

public:
    StartDetectorModelAnalysisRequestPrivate(const IoTEventsRequest::Action action,
                                   StartDetectorModelAnalysisRequest * const q);
    StartDetectorModelAnalysisRequestPrivate(const StartDetectorModelAnalysisRequestPrivate &other,
                                   StartDetectorModelAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDetectorModelAnalysisRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

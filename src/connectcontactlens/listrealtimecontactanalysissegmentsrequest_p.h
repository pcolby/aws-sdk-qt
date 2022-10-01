// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSREQUEST_P_H
#define QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSREQUEST_P_H

#include "connectcontactlensrequest_p.h"
#include "listrealtimecontactanalysissegmentsrequest.h"

namespace QtAws {
namespace ConnectContactLens {

class ListRealtimeContactAnalysisSegmentsRequest;

class ListRealtimeContactAnalysisSegmentsRequestPrivate : public ConnectContactLensRequestPrivate {

public:
    ListRealtimeContactAnalysisSegmentsRequestPrivate(const ConnectContactLensRequest::Action action,
                                   ListRealtimeContactAnalysisSegmentsRequest * const q);
    ListRealtimeContactAnalysisSegmentsRequestPrivate(const ListRealtimeContactAnalysisSegmentsRequestPrivate &other,
                                   ListRealtimeContactAnalysisSegmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRealtimeContactAnalysisSegmentsRequest)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif

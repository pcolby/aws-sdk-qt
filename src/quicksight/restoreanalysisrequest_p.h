// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREANALYSISREQUEST_P_H
#define QTAWS_RESTOREANALYSISREQUEST_P_H

#include "quicksightrequest_p.h"
#include "restoreanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class RestoreAnalysisRequest;

class RestoreAnalysisRequestPrivate : public QuickSightRequestPrivate {

public:
    RestoreAnalysisRequestPrivate(const QuickSightRequest::Action action,
                                   RestoreAnalysisRequest * const q);
    RestoreAnalysisRequestPrivate(const RestoreAnalysisRequestPrivate &other,
                                   RestoreAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

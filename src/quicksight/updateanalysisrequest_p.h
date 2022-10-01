// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISREQUEST_P_H
#define QTAWS_UPDATEANALYSISREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updateanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisRequest;

class UpdateAnalysisRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateAnalysisRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateAnalysisRequest * const q);
    UpdateAnalysisRequestPrivate(const UpdateAnalysisRequestPrivate &other,
                                   UpdateAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

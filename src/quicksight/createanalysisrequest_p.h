// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYSISREQUEST_P_H
#define QTAWS_CREATEANALYSISREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAnalysisRequest;

class CreateAnalysisRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateAnalysisRequestPrivate(const QuickSightRequest::Action action,
                                   CreateAnalysisRequest * const q);
    CreateAnalysisRequestPrivate(const CreateAnalysisRequestPrivate &other,
                                   CreateAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

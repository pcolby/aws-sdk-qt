// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISREQUEST_P_H
#define QTAWS_DELETEANALYSISREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deleteanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteAnalysisRequest;

class DeleteAnalysisRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteAnalysisRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteAnalysisRequest * const q);
    DeleteAnalysisRequestPrivate(const DeleteAnalysisRequestPrivate &other,
                                   DeleteAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

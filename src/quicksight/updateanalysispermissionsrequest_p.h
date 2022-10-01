// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEANALYSISPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updateanalysispermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisPermissionsRequest;

class UpdateAnalysisPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateAnalysisPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateAnalysisPermissionsRequest * const q);
    UpdateAnalysisPermissionsRequestPrivate(const UpdateAnalysisPermissionsRequestPrivate &other,
                                   UpdateAnalysisPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAnalysisPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELENSREVIEWREQUEST_P_H
#define QTAWS_UPDATELENSREVIEWREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "updatelensreviewrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateLensReviewRequest;

class UpdateLensReviewRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpdateLensReviewRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpdateLensReviewRequest * const q);
    UpdateLensReviewRequestPrivate(const UpdateLensReviewRequestPrivate &other,
                                   UpdateLensReviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLensReviewRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

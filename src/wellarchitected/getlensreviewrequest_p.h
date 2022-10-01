// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWREQUEST_P_H
#define QTAWS_GETLENSREVIEWREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getlensreviewrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewRequest;

class GetLensReviewRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetLensReviewRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetLensReviewRequest * const q);
    GetLensReviewRequestPrivate(const GetLensReviewRequestPrivate &other,
                                   GetLensReviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLensReviewRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

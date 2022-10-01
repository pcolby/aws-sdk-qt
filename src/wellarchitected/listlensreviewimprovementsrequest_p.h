// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWIMPROVEMENTSREQUEST_P_H
#define QTAWS_LISTLENSREVIEWIMPROVEMENTSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listlensreviewimprovementsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewImprovementsRequest;

class ListLensReviewImprovementsRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListLensReviewImprovementsRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListLensReviewImprovementsRequest * const q);
    ListLensReviewImprovementsRequestPrivate(const ListLensReviewImprovementsRequestPrivate &other,
                                   ListLensReviewImprovementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLensReviewImprovementsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

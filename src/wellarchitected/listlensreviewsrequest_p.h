// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWSREQUEST_P_H
#define QTAWS_LISTLENSREVIEWSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listlensreviewsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewsRequest;

class ListLensReviewsRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListLensReviewsRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListLensReviewsRequest * const q);
    ListLensReviewsRequestPrivate(const ListLensReviewsRequestPrivate &other,
                                   ListLensReviewsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLensReviewsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

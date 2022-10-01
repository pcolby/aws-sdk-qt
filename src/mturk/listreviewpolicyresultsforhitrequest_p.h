// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWPOLICYRESULTSFORHITREQUEST_P_H
#define QTAWS_LISTREVIEWPOLICYRESULTSFORHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "listreviewpolicyresultsforhitrequest.h"

namespace QtAws {
namespace MTurk {

class ListReviewPolicyResultsForHITRequest;

class ListReviewPolicyResultsForHITRequestPrivate : public MTurkRequestPrivate {

public:
    ListReviewPolicyResultsForHITRequestPrivate(const MTurkRequest::Action action,
                                   ListReviewPolicyResultsForHITRequest * const q);
    ListReviewPolicyResultsForHITRequestPrivate(const ListReviewPolicyResultsForHITRequestPrivate &other,
                                   ListReviewPolicyResultsForHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReviewPolicyResultsForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

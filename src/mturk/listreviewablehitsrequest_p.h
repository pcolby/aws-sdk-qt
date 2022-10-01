// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWABLEHITSREQUEST_P_H
#define QTAWS_LISTREVIEWABLEHITSREQUEST_P_H

#include "mturkrequest_p.h"
#include "listreviewablehitsrequest.h"

namespace QtAws {
namespace MTurk {

class ListReviewableHITsRequest;

class ListReviewableHITsRequestPrivate : public MTurkRequestPrivate {

public:
    ListReviewableHITsRequestPrivate(const MTurkRequest::Action action,
                                   ListReviewableHITsRequest * const q);
    ListReviewableHITsRequestPrivate(const ListReviewableHITsRequestPrivate &other,
                                   ListReviewableHITsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReviewableHITsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

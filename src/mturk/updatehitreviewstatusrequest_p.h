// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITREVIEWSTATUSREQUEST_P_H
#define QTAWS_UPDATEHITREVIEWSTATUSREQUEST_P_H

#include "mturkrequest_p.h"
#include "updatehitreviewstatusrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateHITReviewStatusRequest;

class UpdateHITReviewStatusRequestPrivate : public MTurkRequestPrivate {

public:
    UpdateHITReviewStatusRequestPrivate(const MTurkRequest::Action action,
                                   UpdateHITReviewStatusRequest * const q);
    UpdateHITReviewStatusRequestPrivate(const UpdateHITReviewStatusRequestPrivate &other,
                                   UpdateHITReviewStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHITReviewStatusRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

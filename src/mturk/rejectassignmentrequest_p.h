// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTASSIGNMENTREQUEST_P_H
#define QTAWS_REJECTASSIGNMENTREQUEST_P_H

#include "mturkrequest_p.h"
#include "rejectassignmentrequest.h"

namespace QtAws {
namespace MTurk {

class RejectAssignmentRequest;

class RejectAssignmentRequestPrivate : public MTurkRequestPrivate {

public:
    RejectAssignmentRequestPrivate(const MTurkRequest::Action action,
                                   RejectAssignmentRequest * const q);
    RejectAssignmentRequestPrivate(const RejectAssignmentRequestPrivate &other,
                                   RejectAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectAssignmentRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

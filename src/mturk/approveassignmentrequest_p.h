// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVEASSIGNMENTREQUEST_P_H
#define QTAWS_APPROVEASSIGNMENTREQUEST_P_H

#include "mturkrequest_p.h"
#include "approveassignmentrequest.h"

namespace QtAws {
namespace MTurk {

class ApproveAssignmentRequest;

class ApproveAssignmentRequestPrivate : public MTurkRequestPrivate {

public:
    ApproveAssignmentRequestPrivate(const MTurkRequest::Action action,
                                   ApproveAssignmentRequest * const q);
    ApproveAssignmentRequestPrivate(const ApproveAssignmentRequestPrivate &other,
                                   ApproveAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApproveAssignmentRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

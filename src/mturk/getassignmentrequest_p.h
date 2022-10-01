// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSIGNMENTREQUEST_P_H
#define QTAWS_GETASSIGNMENTREQUEST_P_H

#include "mturkrequest_p.h"
#include "getassignmentrequest.h"

namespace QtAws {
namespace MTurk {

class GetAssignmentRequest;

class GetAssignmentRequestPrivate : public MTurkRequestPrivate {

public:
    GetAssignmentRequestPrivate(const MTurkRequest::Action action,
                                   GetAssignmentRequest * const q);
    GetAssignmentRequestPrivate(const GetAssignmentRequestPrivate &other,
                                   GetAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssignmentRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

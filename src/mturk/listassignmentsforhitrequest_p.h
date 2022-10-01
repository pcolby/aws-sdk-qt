// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSIGNMENTSFORHITREQUEST_P_H
#define QTAWS_LISTASSIGNMENTSFORHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "listassignmentsforhitrequest.h"

namespace QtAws {
namespace MTurk {

class ListAssignmentsForHITRequest;

class ListAssignmentsForHITRequestPrivate : public MTurkRequestPrivate {

public:
    ListAssignmentsForHITRequestPrivate(const MTurkRequest::Action action,
                                   ListAssignmentsForHITRequest * const q);
    ListAssignmentsForHITRequestPrivate(const ListAssignmentsForHITRequestPrivate &other,
                                   ListAssignmentsForHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssignmentsForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

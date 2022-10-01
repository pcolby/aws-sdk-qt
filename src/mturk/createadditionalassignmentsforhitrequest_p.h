// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDITIONALASSIGNMENTSFORHITREQUEST_P_H
#define QTAWS_CREATEADDITIONALASSIGNMENTSFORHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "createadditionalassignmentsforhitrequest.h"

namespace QtAws {
namespace MTurk {

class CreateAdditionalAssignmentsForHITRequest;

class CreateAdditionalAssignmentsForHITRequestPrivate : public MTurkRequestPrivate {

public:
    CreateAdditionalAssignmentsForHITRequestPrivate(const MTurkRequest::Action action,
                                   CreateAdditionalAssignmentsForHITRequest * const q);
    CreateAdditionalAssignmentsForHITRequestPrivate(const CreateAdditionalAssignmentsForHITRequestPrivate &other,
                                   CreateAdditionalAssignmentsForHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAdditionalAssignmentsForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

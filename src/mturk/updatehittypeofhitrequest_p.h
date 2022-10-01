// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITTYPEOFHITREQUEST_P_H
#define QTAWS_UPDATEHITTYPEOFHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "updatehittypeofhitrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateHITTypeOfHITRequest;

class UpdateHITTypeOfHITRequestPrivate : public MTurkRequestPrivate {

public:
    UpdateHITTypeOfHITRequestPrivate(const MTurkRequest::Action action,
                                   UpdateHITTypeOfHITRequest * const q);
    UpdateHITTypeOfHITRequestPrivate(const UpdateHITTypeOfHITRequestPrivate &other,
                                   UpdateHITTypeOfHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHITTypeOfHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

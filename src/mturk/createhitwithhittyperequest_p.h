// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITWITHHITTYPEREQUEST_P_H
#define QTAWS_CREATEHITWITHHITTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "createhitwithhittyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITWithHITTypeRequest;

class CreateHITWithHITTypeRequestPrivate : public MTurkRequestPrivate {

public:
    CreateHITWithHITTypeRequestPrivate(const MTurkRequest::Action action,
                                   CreateHITWithHITTypeRequest * const q);
    CreateHITWithHITTypeRequestPrivate(const CreateHITWithHITTypeRequestPrivate &other,
                                   CreateHITWithHITTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHITWithHITTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

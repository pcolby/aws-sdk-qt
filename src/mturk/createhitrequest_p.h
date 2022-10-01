// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITREQUEST_P_H
#define QTAWS_CREATEHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "createhitrequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITRequest;

class CreateHITRequestPrivate : public MTurkRequestPrivate {

public:
    CreateHITRequestPrivate(const MTurkRequest::Action action,
                                   CreateHITRequest * const q);
    CreateHITRequestPrivate(const CreateHITRequestPrivate &other,
                                   CreateHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

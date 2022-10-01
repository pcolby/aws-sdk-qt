// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITTYPEREQUEST_P_H
#define QTAWS_CREATEHITTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "createhittyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITTypeRequest;

class CreateHITTypeRequestPrivate : public MTurkRequestPrivate {

public:
    CreateHITTypeRequestPrivate(const MTurkRequest::Action action,
                                   CreateHITTypeRequest * const q);
    CreateHITTypeRequestPrivate(const CreateHITTypeRequestPrivate &other,
                                   CreateHITTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHITTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

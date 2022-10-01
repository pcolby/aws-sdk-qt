// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESESSIONREQUEST_P_H
#define QTAWS_CREATESESSIONREQUEST_P_H

#include "wisdomrequest_p.h"
#include "createsessionrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateSessionRequest;

class CreateSessionRequestPrivate : public WisdomRequestPrivate {

public:
    CreateSessionRequestPrivate(const WisdomRequest::Action action,
                                   CreateSessionRequest * const q);
    CreateSessionRequestPrivate(const CreateSessionRequestPrivate &other,
                                   CreateSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSessionRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

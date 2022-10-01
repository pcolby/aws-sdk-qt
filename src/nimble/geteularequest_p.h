// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEULAREQUEST_P_H
#define QTAWS_GETEULAREQUEST_P_H

#include "nimblerequest_p.h"
#include "geteularequest.h"

namespace QtAws {
namespace Nimble {

class GetEulaRequest;

class GetEulaRequestPrivate : public NimbleRequestPrivate {

public:
    GetEulaRequestPrivate(const NimbleRequest::Action action,
                                   GetEulaRequest * const q);
    GetEulaRequestPrivate(const GetEulaRequestPrivate &other,
                                   GetEulaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEulaRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

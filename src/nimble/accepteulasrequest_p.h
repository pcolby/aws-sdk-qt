// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTEULASREQUEST_P_H
#define QTAWS_ACCEPTEULASREQUEST_P_H

#include "nimblerequest_p.h"
#include "accepteulasrequest.h"

namespace QtAws {
namespace Nimble {

class AcceptEulasRequest;

class AcceptEulasRequestPrivate : public NimbleRequestPrivate {

public:
    AcceptEulasRequestPrivate(const NimbleRequest::Action action,
                                   AcceptEulasRequest * const q);
    AcceptEulasRequestPrivate(const AcceptEulasRequestPrivate &other,
                                   AcceptEulasRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptEulasRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

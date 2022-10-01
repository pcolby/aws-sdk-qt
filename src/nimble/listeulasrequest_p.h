// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULASREQUEST_P_H
#define QTAWS_LISTEULASREQUEST_P_H

#include "nimblerequest_p.h"
#include "listeulasrequest.h"

namespace QtAws {
namespace Nimble {

class ListEulasRequest;

class ListEulasRequestPrivate : public NimbleRequestPrivate {

public:
    ListEulasRequestPrivate(const NimbleRequest::Action action,
                                   ListEulasRequest * const q);
    ListEulasRequestPrivate(const ListEulasRequestPrivate &other,
                                   ListEulasRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEulasRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

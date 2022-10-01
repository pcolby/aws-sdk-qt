// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACKSREQUEST_P_H
#define QTAWS_LISTATTACKSREQUEST_P_H

#include "shieldrequest_p.h"
#include "listattacksrequest.h"

namespace QtAws {
namespace Shield {

class ListAttacksRequest;

class ListAttacksRequestPrivate : public ShieldRequestPrivate {

public:
    ListAttacksRequestPrivate(const ShieldRequest::Action action,
                                   ListAttacksRequest * const q);
    ListAttacksRequestPrivate(const ListAttacksRequestPrivate &other,
                                   ListAttacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttacksRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

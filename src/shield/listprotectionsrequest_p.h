// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONSREQUEST_P_H
#define QTAWS_LISTPROTECTIONSREQUEST_P_H

#include "shieldrequest_p.h"
#include "listprotectionsrequest.h"

namespace QtAws {
namespace Shield {

class ListProtectionsRequest;

class ListProtectionsRequestPrivate : public ShieldRequestPrivate {

public:
    ListProtectionsRequestPrivate(const ShieldRequest::Action action,
                                   ListProtectionsRequest * const q);
    ListProtectionsRequestPrivate(const ListProtectionsRequestPrivate &other,
                                   ListProtectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProtectionsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

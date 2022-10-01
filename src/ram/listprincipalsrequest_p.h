// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSREQUEST_P_H
#define QTAWS_LISTPRINCIPALSREQUEST_P_H

#include "ramrequest_p.h"
#include "listprincipalsrequest.h"

namespace QtAws {
namespace Ram {

class ListPrincipalsRequest;

class ListPrincipalsRequestPrivate : public RamRequestPrivate {

public:
    ListPrincipalsRequestPrivate(const RamRequest::Action action,
                                   ListPrincipalsRequest * const q);
    ListPrincipalsRequestPrivate(const ListPrincipalsRequestPrivate &other,
                                   ListPrincipalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPrincipalsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif

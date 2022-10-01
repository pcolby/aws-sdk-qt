// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYPERSONASREQUEST_P_H
#define QTAWS_LISTENTITYPERSONASREQUEST_P_H

#include "kendrarequest_p.h"
#include "listentitypersonasrequest.h"

namespace QtAws {
namespace Kendra {

class ListEntityPersonasRequest;

class ListEntityPersonasRequestPrivate : public KendraRequestPrivate {

public:
    ListEntityPersonasRequestPrivate(const KendraRequest::Action action,
                                   ListEntityPersonasRequest * const q);
    ListEntityPersonasRequestPrivate(const ListEntityPersonasRequestPrivate &other,
                                   ListEntityPersonasRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntityPersonasRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif

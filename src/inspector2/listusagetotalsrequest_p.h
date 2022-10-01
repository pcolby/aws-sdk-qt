// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGETOTALSREQUEST_P_H
#define QTAWS_LISTUSAGETOTALSREQUEST_P_H

#include "inspector2request_p.h"
#include "listusagetotalsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListUsageTotalsRequest;

class ListUsageTotalsRequestPrivate : public Inspector2RequestPrivate {

public:
    ListUsageTotalsRequestPrivate(const Inspector2Request::Action action,
                                   ListUsageTotalsRequest * const q);
    ListUsageTotalsRequestPrivate(const ListUsageTotalsRequestPrivate &other,
                                   ListUsageTotalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsageTotalsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGETOTALSREQUEST_P_H
#define QTAWS_GETUSAGETOTALSREQUEST_P_H

#include "macie2request_p.h"
#include "getusagetotalsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetUsageTotalsRequest;

class GetUsageTotalsRequestPrivate : public Macie2RequestPrivate {

public:
    GetUsageTotalsRequestPrivate(const Macie2Request::Action action,
                                   GetUsageTotalsRequest * const q);
    GetUsageTotalsRequestPrivate(const GetUsageTotalsRequestPrivate &other,
                                   GetUsageTotalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsageTotalsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

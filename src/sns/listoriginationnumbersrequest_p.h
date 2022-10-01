// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINATIONNUMBERSREQUEST_P_H
#define QTAWS_LISTORIGINATIONNUMBERSREQUEST_P_H

#include "snsrequest_p.h"
#include "listoriginationnumbersrequest.h"

namespace QtAws {
namespace Sns {

class ListOriginationNumbersRequest;

class ListOriginationNumbersRequestPrivate : public SnsRequestPrivate {

public:
    ListOriginationNumbersRequestPrivate(const SnsRequest::Action action,
                                   ListOriginationNumbersRequest * const q);
    ListOriginationNumbersRequestPrivate(const ListOriginationNumbersRequestPrivate &other,
                                   ListOriginationNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOriginationNumbersRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

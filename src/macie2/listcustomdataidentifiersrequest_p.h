// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMDATAIDENTIFIERSREQUEST_P_H
#define QTAWS_LISTCUSTOMDATAIDENTIFIERSREQUEST_P_H

#include "macie2request_p.h"
#include "listcustomdataidentifiersrequest.h"

namespace QtAws {
namespace Macie2 {

class ListCustomDataIdentifiersRequest;

class ListCustomDataIdentifiersRequestPrivate : public Macie2RequestPrivate {

public:
    ListCustomDataIdentifiersRequestPrivate(const Macie2Request::Action action,
                                   ListCustomDataIdentifiersRequest * const q);
    ListCustomDataIdentifiersRequestPrivate(const ListCustomDataIdentifiersRequestPrivate &other,
                                   ListCustomDataIdentifiersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomDataIdentifiersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

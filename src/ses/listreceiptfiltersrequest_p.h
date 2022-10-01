// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTFILTERSREQUEST_P_H
#define QTAWS_LISTRECEIPTFILTERSREQUEST_P_H

#include "sesrequest_p.h"
#include "listreceiptfiltersrequest.h"

namespace QtAws {
namespace Ses {

class ListReceiptFiltersRequest;

class ListReceiptFiltersRequestPrivate : public SesRequestPrivate {

public:
    ListReceiptFiltersRequestPrivate(const SesRequest::Action action,
                                   ListReceiptFiltersRequest * const q);
    ListReceiptFiltersRequestPrivate(const ListReceiptFiltersRequestPrivate &other,
                                   ListReceiptFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReceiptFiltersRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

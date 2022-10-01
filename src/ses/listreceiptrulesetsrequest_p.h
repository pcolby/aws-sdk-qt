// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTRULESETSREQUEST_P_H
#define QTAWS_LISTRECEIPTRULESETSREQUEST_P_H

#include "sesrequest_p.h"
#include "listreceiptrulesetsrequest.h"

namespace QtAws {
namespace Ses {

class ListReceiptRuleSetsRequest;

class ListReceiptRuleSetsRequestPrivate : public SesRequestPrivate {

public:
    ListReceiptRuleSetsRequestPrivate(const SesRequest::Action action,
                                   ListReceiptRuleSetsRequest * const q);
    ListReceiptRuleSetsRequestPrivate(const ListReceiptRuleSetsRequestPrivate &other,
                                   ListReceiptRuleSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReceiptRuleSetsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

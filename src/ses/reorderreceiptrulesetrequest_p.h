// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REORDERRECEIPTRULESETREQUEST_P_H
#define QTAWS_REORDERRECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "reorderreceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class ReorderReceiptRuleSetRequest;

class ReorderReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    ReorderReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   ReorderReceiptRuleSetRequest * const q);
    ReorderReceiptRuleSetRequestPrivate(const ReorderReceiptRuleSetRequestPrivate &other,
                                   ReorderReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReorderReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

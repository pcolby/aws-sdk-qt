// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONERECEIPTRULESETREQUEST_P_H
#define QTAWS_CLONERECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "clonereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class CloneReceiptRuleSetRequest;

class CloneReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    CloneReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   CloneReceiptRuleSetRequest * const q);
    CloneReceiptRuleSetRequestPrivate(const CloneReceiptRuleSetRequestPrivate &other,
                                   CloneReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloneReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULESETREQUEST_P_H
#define QTAWS_CREATERECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "createreceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleSetRequest;

class CreateReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    CreateReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   CreateReceiptRuleSetRequest * const q);
    CreateReceiptRuleSetRequestPrivate(const CreateReceiptRuleSetRequestPrivate &other,
                                   CreateReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULEREQUEST_P_H
#define QTAWS_CREATERECEIPTRULEREQUEST_P_H

#include "sesrequest_p.h"
#include "createreceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleRequest;

class CreateReceiptRuleRequestPrivate : public SesRequestPrivate {

public:
    CreateReceiptRuleRequestPrivate(const SesRequest::Action action,
                                   CreateReceiptRuleRequest * const q);
    CreateReceiptRuleRequestPrivate(const CreateReceiptRuleRequestPrivate &other,
                                   CreateReceiptRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

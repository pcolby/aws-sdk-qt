// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECEIPTRULEREQUEST_P_H
#define QTAWS_UPDATERECEIPTRULEREQUEST_P_H

#include "sesrequest_p.h"
#include "updatereceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class UpdateReceiptRuleRequest;

class UpdateReceiptRuleRequestPrivate : public SesRequestPrivate {

public:
    UpdateReceiptRuleRequestPrivate(const SesRequest::Action action,
                                   UpdateReceiptRuleRequest * const q);
    UpdateReceiptRuleRequestPrivate(const UpdateReceiptRuleRequestPrivate &other,
                                   UpdateReceiptRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

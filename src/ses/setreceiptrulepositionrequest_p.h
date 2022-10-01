// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRECEIPTRULEPOSITIONREQUEST_P_H
#define QTAWS_SETRECEIPTRULEPOSITIONREQUEST_P_H

#include "sesrequest_p.h"
#include "setreceiptrulepositionrequest.h"

namespace QtAws {
namespace Ses {

class SetReceiptRulePositionRequest;

class SetReceiptRulePositionRequestPrivate : public SesRequestPrivate {

public:
    SetReceiptRulePositionRequestPrivate(const SesRequest::Action action,
                                   SetReceiptRulePositionRequest * const q);
    SetReceiptRulePositionRequestPrivate(const SetReceiptRulePositionRequestPrivate &other,
                                   SetReceiptRulePositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetReceiptRulePositionRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

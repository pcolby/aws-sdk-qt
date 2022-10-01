// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETACTIVERECEIPTRULESETREQUEST_P_H
#define QTAWS_SETACTIVERECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "setactivereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class SetActiveReceiptRuleSetRequest;

class SetActiveReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    SetActiveReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   SetActiveReceiptRuleSetRequest * const q);
    SetActiveReceiptRuleSetRequestPrivate(const SetActiveReceiptRuleSetRequestPrivate &other,
                                   SetActiveReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetActiveReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

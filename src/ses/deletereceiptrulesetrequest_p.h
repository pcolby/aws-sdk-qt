// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULESETREQUEST_P_H
#define QTAWS_DELETERECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "deletereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleSetRequest;

class DeleteReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    DeleteReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   DeleteReceiptRuleSetRequest * const q);
    DeleteReceiptRuleSetRequestPrivate(const DeleteReceiptRuleSetRequestPrivate &other,
                                   DeleteReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

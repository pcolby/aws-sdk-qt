// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULEREQUEST_P_H
#define QTAWS_DELETERECEIPTRULEREQUEST_P_H

#include "sesrequest_p.h"
#include "deletereceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleRequest;

class DeleteReceiptRuleRequestPrivate : public SesRequestPrivate {

public:
    DeleteReceiptRuleRequestPrivate(const SesRequest::Action action,
                                   DeleteReceiptRuleRequest * const q);
    DeleteReceiptRuleRequestPrivate(const DeleteReceiptRuleRequestPrivate &other,
                                   DeleteReceiptRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

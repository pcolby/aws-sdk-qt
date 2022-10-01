// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTRANSACTIONREQUEST_P_H
#define QTAWS_CANCELTRANSACTIONREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "canceltransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class CancelTransactionRequest;

class CancelTransactionRequestPrivate : public LakeFormationRequestPrivate {

public:
    CancelTransactionRequestPrivate(const LakeFormationRequest::Action action,
                                   CancelTransactionRequest * const q);
    CancelTransactionRequestPrivate(const CancelTransactionRequestPrivate &other,
                                   CancelTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

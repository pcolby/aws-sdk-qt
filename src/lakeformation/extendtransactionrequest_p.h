// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDTRANSACTIONREQUEST_P_H
#define QTAWS_EXTENDTRANSACTIONREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "extendtransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class ExtendTransactionRequest;

class ExtendTransactionRequestPrivate : public LakeFormationRequestPrivate {

public:
    ExtendTransactionRequestPrivate(const LakeFormationRequest::Action action,
                                   ExtendTransactionRequest * const q);
    ExtendTransactionRequestPrivate(const ExtendTransactionRequestPrivate &other,
                                   ExtendTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExtendTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

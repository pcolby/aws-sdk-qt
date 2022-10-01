// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSACTIONREQUEST_P_H
#define QTAWS_STARTTRANSACTIONREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "starttransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class StartTransactionRequest;

class StartTransactionRequestPrivate : public LakeFormationRequestPrivate {

public:
    StartTransactionRequestPrivate(const LakeFormationRequest::Action action,
                                   StartTransactionRequest * const q);
    StartTransactionRequestPrivate(const StartTransactionRequestPrivate &other,
                                   StartTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

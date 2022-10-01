// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGREEMENTREQUEST_P_H
#define QTAWS_CREATEAGREEMENTREQUEST_P_H

#include "transferrequest_p.h"
#include "createagreementrequest.h"

namespace QtAws {
namespace Transfer {

class CreateAgreementRequest;

class CreateAgreementRequestPrivate : public TransferRequestPrivate {

public:
    CreateAgreementRequestPrivate(const TransferRequest::Action action,
                                   CreateAgreementRequest * const q);
    CreateAgreementRequestPrivate(const CreateAgreementRequestPrivate &other,
                                   CreateAgreementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

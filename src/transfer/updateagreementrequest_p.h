// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGREEMENTREQUEST_P_H
#define QTAWS_UPDATEAGREEMENTREQUEST_P_H

#include "transferrequest_p.h"
#include "updateagreementrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateAgreementRequest;

class UpdateAgreementRequestPrivate : public TransferRequestPrivate {

public:
    UpdateAgreementRequestPrivate(const TransferRequest::Action action,
                                   UpdateAgreementRequest * const q);
    UpdateAgreementRequestPrivate(const UpdateAgreementRequestPrivate &other,
                                   UpdateAgreementRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

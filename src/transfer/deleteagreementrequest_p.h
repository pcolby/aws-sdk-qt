// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGREEMENTREQUEST_P_H
#define QTAWS_DELETEAGREEMENTREQUEST_P_H

#include "transferrequest_p.h"
#include "deleteagreementrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteAgreementRequest;

class DeleteAgreementRequestPrivate : public TransferRequestPrivate {

public:
    DeleteAgreementRequestPrivate(const TransferRequest::Action action,
                                   DeleteAgreementRequest * const q);
    DeleteAgreementRequestPrivate(const DeleteAgreementRequestPrivate &other,
                                   DeleteAgreementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

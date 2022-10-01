// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCUSTOMERAGREEMENTREQUEST_P_H
#define QTAWS_CONFIRMCUSTOMERAGREEMENTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "confirmcustomeragreementrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmCustomerAgreementRequest;

class ConfirmCustomerAgreementRequestPrivate : public DirectConnectRequestPrivate {

public:
    ConfirmCustomerAgreementRequestPrivate(const DirectConnectRequest::Action action,
                                   ConfirmCustomerAgreementRequest * const q);
    ConfirmCustomerAgreementRequestPrivate(const ConfirmCustomerAgreementRequestPrivate &other,
                                   ConfirmCustomerAgreementRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmCustomerAgreementRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

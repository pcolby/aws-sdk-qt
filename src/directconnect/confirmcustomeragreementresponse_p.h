// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCUSTOMERAGREEMENTRESPONSE_P_H
#define QTAWS_CONFIRMCUSTOMERAGREEMENTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmCustomerAgreementResponse;

class ConfirmCustomerAgreementResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit ConfirmCustomerAgreementResponsePrivate(ConfirmCustomerAgreementResponse * const q);

    void parseConfirmCustomerAgreementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmCustomerAgreementResponse)
    Q_DISABLE_COPY(ConfirmCustomerAgreementResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

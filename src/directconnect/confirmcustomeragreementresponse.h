// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCUSTOMERAGREEMENTRESPONSE_H
#define QTAWS_CONFIRMCUSTOMERAGREEMENTRESPONSE_H

#include "directconnectresponse.h"
#include "confirmcustomeragreementrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmCustomerAgreementResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmCustomerAgreementResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    ConfirmCustomerAgreementResponse(const ConfirmCustomerAgreementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmCustomerAgreementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmCustomerAgreementResponse)
    Q_DISABLE_COPY(ConfirmCustomerAgreementResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

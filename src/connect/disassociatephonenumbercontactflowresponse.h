// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_H
#define QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_H

#include "connectresponse.h"
#include "disassociatephonenumbercontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DisassociatePhoneNumberContactFlowResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociatePhoneNumberContactFlowResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociatePhoneNumberContactFlowResponse(const DisassociatePhoneNumberContactFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePhoneNumberContactFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumberContactFlowResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumberContactFlowResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

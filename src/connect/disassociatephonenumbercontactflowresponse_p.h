// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociatePhoneNumberContactFlowResponse;

class DisassociatePhoneNumberContactFlowResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociatePhoneNumberContactFlowResponsePrivate(DisassociatePhoneNumberContactFlowResponse * const q);

    void parseDisassociatePhoneNumberContactFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumberContactFlowResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumberContactFlowResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif

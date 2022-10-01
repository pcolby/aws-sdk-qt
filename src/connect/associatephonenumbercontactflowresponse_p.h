// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_P_H
#define QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociatePhoneNumberContactFlowResponse;

class AssociatePhoneNumberContactFlowResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociatePhoneNumberContactFlowResponsePrivate(AssociatePhoneNumberContactFlowResponse * const q);

    void parseAssociatePhoneNumberContactFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumberContactFlowResponse)
    Q_DISABLE_COPY(AssociatePhoneNumberContactFlowResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif

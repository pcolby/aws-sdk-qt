// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTFLOWRESPONSE_P_H
#define QTAWS_CREATECONTACTFLOWRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateContactFlowResponse;

class CreateContactFlowResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateContactFlowResponsePrivate(CreateContactFlowResponse * const q);

    void parseCreateContactFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactFlowResponse)
    Q_DISABLE_COPY(CreateContactFlowResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif

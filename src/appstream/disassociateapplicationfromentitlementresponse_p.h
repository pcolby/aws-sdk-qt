// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTRESPONSE_P_H
#define QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFromEntitlementResponse;

class DisassociateApplicationFromEntitlementResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DisassociateApplicationFromEntitlementResponsePrivate(DisassociateApplicationFromEntitlementResponse * const q);

    void parseDisassociateApplicationFromEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateApplicationFromEntitlementResponse)
    Q_DISABLE_COPY(DisassociateApplicationFromEntitlementResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif

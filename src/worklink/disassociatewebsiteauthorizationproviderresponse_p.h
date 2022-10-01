// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERRESPONSE_P_H
#define QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteAuthorizationProviderResponse;

class DisassociateWebsiteAuthorizationProviderResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DisassociateWebsiteAuthorizationProviderResponsePrivate(DisassociateWebsiteAuthorizationProviderResponse * const q);

    void parseDisassociateWebsiteAuthorizationProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWebsiteAuthorizationProviderResponse)
    Q_DISABLE_COPY(DisassociateWebsiteAuthorizationProviderResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

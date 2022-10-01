// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_P_H
#define QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DisassociateIdentityProviderConfigResponse;

class DisassociateIdentityProviderConfigResponsePrivate : public EksResponsePrivate {

public:

    explicit DisassociateIdentityProviderConfigResponsePrivate(DisassociateIdentityProviderConfigResponse * const q);

    void parseDisassociateIdentityProviderConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateIdentityProviderConfigResponse)
    Q_DISABLE_COPY(DisassociateIdentityProviderConfigResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

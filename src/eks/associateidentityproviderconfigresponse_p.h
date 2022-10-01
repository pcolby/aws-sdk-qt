// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_P_H
#define QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class AssociateIdentityProviderConfigResponse;

class AssociateIdentityProviderConfigResponsePrivate : public EksResponsePrivate {

public:

    explicit AssociateIdentityProviderConfigResponsePrivate(AssociateIdentityProviderConfigResponse * const q);

    void parseAssociateIdentityProviderConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateIdentityProviderConfigResponse)
    Q_DISABLE_COPY(AssociateIdentityProviderConfigResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

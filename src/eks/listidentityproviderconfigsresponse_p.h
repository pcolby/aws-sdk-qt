// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERCONFIGSRESPONSE_P_H
#define QTAWS_LISTIDENTITYPROVIDERCONFIGSRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class ListIdentityProviderConfigsResponse;

class ListIdentityProviderConfigsResponsePrivate : public EksResponsePrivate {

public:

    explicit ListIdentityProviderConfigsResponsePrivate(ListIdentityProviderConfigsResponse * const q);

    void parseListIdentityProviderConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentityProviderConfigsResponse)
    Q_DISABLE_COPY(ListIdentityProviderConfigsResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

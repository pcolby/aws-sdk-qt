// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERSRESPONSE_P_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProvidersResponse;

class ListOpenIDConnectProvidersResponsePrivate : public IamResponsePrivate {

public:

    explicit ListOpenIDConnectProvidersResponsePrivate(ListOpenIDConnectProvidersResponse * const q);

    void parseListOpenIDConnectProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOpenIDConnectProvidersResponse)
    Q_DISABLE_COPY(ListOpenIDConnectProvidersResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

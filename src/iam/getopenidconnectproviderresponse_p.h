// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_GETOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetOpenIDConnectProviderResponse;

class GetOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit GetOpenIDConnectProviderResponsePrivate(GetOpenIDConnectProviderResponse * const q);

    void parseGetOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(GetOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

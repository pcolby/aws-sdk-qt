// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class RemoveClientIDFromOpenIDConnectProviderResponse;

class RemoveClientIDFromOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit RemoveClientIDFromOpenIDConnectProviderResponsePrivate(RemoveClientIDFromOpenIDConnectProviderResponse * const q);

    void parseRemoveClientIDFromOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveClientIDFromOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(RemoveClientIDFromOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AddClientIDToOpenIDConnectProviderResponse;

class AddClientIDToOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit AddClientIDToOpenIDConnectProviderResponsePrivate(AddClientIDToOpenIDConnectProviderResponse * const q);

    void parseAddClientIDToOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddClientIDToOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(AddClientIDToOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

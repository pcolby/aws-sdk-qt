// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_CREATEOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateOpenIDConnectProviderResponse;

class CreateOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateOpenIDConnectProviderResponsePrivate(CreateOpenIDConnectProviderResponse * const q);

    void parseCreateOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(CreateOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

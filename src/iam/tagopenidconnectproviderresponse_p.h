// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_TAGOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagOpenIDConnectProviderResponse;

class TagOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit TagOpenIDConnectProviderResponsePrivate(TagOpenIDConnectProviderResponse * const q);

    void parseTagOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(TagOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

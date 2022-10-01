// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_UNTAGOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagOpenIDConnectProviderResponse;

class UntagOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagOpenIDConnectProviderResponsePrivate(UntagOpenIDConnectProviderResponse * const q);

    void parseUntagOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(UntagOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

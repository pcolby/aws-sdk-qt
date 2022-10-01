// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_DELETEOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteOpenIDConnectProviderResponse;

class DeleteOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteOpenIDConnectProviderResponsePrivate(DeleteOpenIDConnectProviderResponse * const q);

    void parseDeleteOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(DeleteOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

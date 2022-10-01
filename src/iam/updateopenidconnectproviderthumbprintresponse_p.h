// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTRESPONSE_P_H
#define QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateOpenIDConnectProviderThumbprintResponse;

class UpdateOpenIDConnectProviderThumbprintResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateOpenIDConnectProviderThumbprintResponsePrivate(UpdateOpenIDConnectProviderThumbprintResponse * const q);

    void parseUpdateOpenIDConnectProviderThumbprintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOpenIDConnectProviderThumbprintResponse)
    Q_DISABLE_COPY(UpdateOpenIDConnectProviderThumbprintResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

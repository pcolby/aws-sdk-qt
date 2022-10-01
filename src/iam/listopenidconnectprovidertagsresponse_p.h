// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERTAGSRESPONSE_P_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERTAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProviderTagsResponse;

class ListOpenIDConnectProviderTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListOpenIDConnectProviderTagsResponsePrivate(ListOpenIDConnectProviderTagsResponse * const q);

    void parseListOpenIDConnectProviderTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOpenIDConnectProviderTagsResponse)
    Q_DISABLE_COPY(ListOpenIDConnectProviderTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

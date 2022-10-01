// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSBYFUNCTIONRESPONSE_P_H
#define QTAWS_LISTRESOLVERSBYFUNCTIONRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListResolversByFunctionResponse;

class ListResolversByFunctionResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListResolversByFunctionResponsePrivate(ListResolversByFunctionResponse * const q);

    void parseListResolversByFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolversByFunctionResponse)
    Q_DISABLE_COPY(ListResolversByFunctionResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

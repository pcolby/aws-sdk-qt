// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRAPHQLAPIRESPONSE_P_H
#define QTAWS_GETGRAPHQLAPIRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetGraphqlApiResponse;

class GetGraphqlApiResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetGraphqlApiResponsePrivate(GetGraphqlApiResponse * const q);

    void parseGetGraphqlApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGraphqlApiResponse)
    Q_DISABLE_COPY(GetGraphqlApiResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

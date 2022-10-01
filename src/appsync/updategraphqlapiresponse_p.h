// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGRAPHQLAPIRESPONSE_P_H
#define QTAWS_UPDATEGRAPHQLAPIRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateGraphqlApiResponse;

class UpdateGraphqlApiResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateGraphqlApiResponsePrivate(UpdateGraphqlApiResponse * const q);

    void parseUpdateGraphqlApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGraphqlApiResponse)
    Q_DISABLE_COPY(UpdateGraphqlApiResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPICACHERESPONSE_P_H
#define QTAWS_UPDATEAPICACHERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateApiCacheResponse;

class UpdateApiCacheResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateApiCacheResponsePrivate(UpdateApiCacheResponse * const q);

    void parseUpdateApiCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiCacheResponse)
    Q_DISABLE_COPY(UpdateApiCacheResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPICACHERESPONSE_P_H
#define QTAWS_GETAPICACHERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetApiCacheResponse;

class GetApiCacheResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetApiCacheResponsePrivate(GetApiCacheResponse * const q);

    void parseGetApiCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApiCacheResponse)
    Q_DISABLE_COPY(GetApiCacheResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

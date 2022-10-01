// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHAPICACHERESPONSE_P_H
#define QTAWS_FLUSHAPICACHERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class FlushApiCacheResponse;

class FlushApiCacheResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit FlushApiCacheResponsePrivate(FlushApiCacheResponse * const q);

    void parseFlushApiCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FlushApiCacheResponse)
    Q_DISABLE_COPY(FlushApiCacheResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

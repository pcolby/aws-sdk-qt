// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPICACHERESPONSE_P_H
#define QTAWS_CREATEAPICACHERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class CreateApiCacheResponse;

class CreateApiCacheResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit CreateApiCacheResponsePrivate(CreateApiCacheResponse * const q);

    void parseCreateApiCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApiCacheResponse)
    Q_DISABLE_COPY(CreateApiCacheResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

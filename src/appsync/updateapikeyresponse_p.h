// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIKEYRESPONSE_P_H
#define QTAWS_UPDATEAPIKEYRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateApiKeyResponse;

class UpdateApiKeyResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateApiKeyResponsePrivate(UpdateApiKeyResponse * const q);

    void parseUpdateApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiKeyResponse)
    Q_DISABLE_COPY(UpdateApiKeyResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

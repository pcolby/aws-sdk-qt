// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIKEYRESPONSE_P_H
#define QTAWS_CREATEAPIKEYRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class CreateApiKeyResponse;

class CreateApiKeyResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit CreateApiKeyResponsePrivate(CreateApiKeyResponse * const q);

    void parseCreateApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApiKeyResponse)
    Q_DISABLE_COPY(CreateApiKeyResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

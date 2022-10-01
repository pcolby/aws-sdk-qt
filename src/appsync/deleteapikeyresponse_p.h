// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIKEYRESPONSE_P_H
#define QTAWS_DELETEAPIKEYRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DeleteApiKeyResponse;

class DeleteApiKeyResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DeleteApiKeyResponsePrivate(DeleteApiKeyResponse * const q);

    void parseDeleteApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApiKeyResponse)
    Q_DISABLE_COPY(DeleteApiKeyResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

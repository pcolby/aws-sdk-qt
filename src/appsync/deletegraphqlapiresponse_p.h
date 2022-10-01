// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHQLAPIRESPONSE_P_H
#define QTAWS_DELETEGRAPHQLAPIRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DeleteGraphqlApiResponse;

class DeleteGraphqlApiResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DeleteGraphqlApiResponsePrivate(DeleteGraphqlApiResponse * const q);

    void parseDeleteGraphqlApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGraphqlApiResponse)
    Q_DISABLE_COPY(DeleteGraphqlApiResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

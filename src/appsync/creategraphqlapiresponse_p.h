// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHQLAPIRESPONSE_P_H
#define QTAWS_CREATEGRAPHQLAPIRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class CreateGraphqlApiResponse;

class CreateGraphqlApiResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit CreateGraphqlApiResponsePrivate(CreateGraphqlApiResponse * const q);

    void parseCreateGraphqlApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGraphqlApiResponse)
    Q_DISABLE_COPY(CreateGraphqlApiResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

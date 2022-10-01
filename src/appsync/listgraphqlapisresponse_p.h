// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHQLAPISRESPONSE_P_H
#define QTAWS_LISTGRAPHQLAPISRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListGraphqlApisResponse;

class ListGraphqlApisResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListGraphqlApisResponsePrivate(ListGraphqlApisResponse * const q);

    void parseListGraphqlApisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGraphqlApisResponse)
    Q_DISABLE_COPY(ListGraphqlApisResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

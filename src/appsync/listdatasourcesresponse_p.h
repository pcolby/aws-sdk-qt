// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESRESPONSE_P_H
#define QTAWS_LISTDATASOURCESRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListDataSourcesResponse;

class ListDataSourcesResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListDataSourcesResponsePrivate(ListDataSourcesResponse * const q);

    void parseListDataSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSourcesResponse)
    Q_DISABLE_COPY(ListDataSourcesResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

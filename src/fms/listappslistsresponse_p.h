// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSLISTSRESPONSE_P_H
#define QTAWS_LISTAPPSLISTSRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class ListAppsListsResponse;

class ListAppsListsResponsePrivate : public FmsResponsePrivate {

public:

    explicit ListAppsListsResponsePrivate(ListAppsListsResponse * const q);

    void parseListAppsListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppsListsResponse)
    Q_DISABLE_COPY(ListAppsListsResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif

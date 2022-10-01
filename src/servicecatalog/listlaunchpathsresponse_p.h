// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPATHSRESPONSE_P_H
#define QTAWS_LISTLAUNCHPATHSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListLaunchPathsResponse;

class ListLaunchPathsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListLaunchPathsResponsePrivate(ListLaunchPathsResponse * const q);

    void parseListLaunchPathsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLaunchPathsResponse)
    Q_DISABLE_COPY(ListLaunchPathsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

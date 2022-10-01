// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCESRESPONSE_P_H
#define QTAWS_LISTAPPVERSIONRESOURCESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourcesResponse;

class ListAppVersionResourcesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAppVersionResourcesResponsePrivate(ListAppVersionResourcesResponse * const q);

    void parseListAppVersionResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppVersionResourcesResponse)
    Q_DISABLE_COPY(ListAppVersionResourcesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

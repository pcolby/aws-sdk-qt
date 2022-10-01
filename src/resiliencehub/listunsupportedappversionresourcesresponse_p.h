// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNSUPPORTEDAPPVERSIONRESOURCESRESPONSE_P_H
#define QTAWS_LISTUNSUPPORTEDAPPVERSIONRESOURCESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListUnsupportedAppVersionResourcesResponse;

class ListUnsupportedAppVersionResourcesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListUnsupportedAppVersionResourcesResponsePrivate(ListUnsupportedAppVersionResourcesResponse * const q);

    void parseListUnsupportedAppVersionResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUnsupportedAppVersionResourcesResponse)
    Q_DISABLE_COPY(ListUnsupportedAppVersionResourcesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

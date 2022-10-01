// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEAPPVERSIONRESOURCESRESPONSE_P_H
#define QTAWS_RESOLVEAPPVERSIONRESOURCESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ResolveAppVersionResourcesResponse;

class ResolveAppVersionResourcesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ResolveAppVersionResourcesResponsePrivate(ResolveAppVersionResourcesResponse * const q);

    void parseResolveAppVersionResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResolveAppVersionResourcesResponse)
    Q_DISABLE_COPY(ResolveAppVersionResourcesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_P_H
#define QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class RemoveDraftAppVersionResourceMappingsResponse;

class RemoveDraftAppVersionResourceMappingsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit RemoveDraftAppVersionResourceMappingsResponsePrivate(RemoveDraftAppVersionResourceMappingsResponse * const q);

    void parseRemoveDraftAppVersionResourceMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveDraftAppVersionResourceMappingsResponse)
    Q_DISABLE_COPY(RemoveDraftAppVersionResourceMappingsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

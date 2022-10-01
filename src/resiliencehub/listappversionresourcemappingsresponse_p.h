// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSRESPONSE_P_H
#define QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourceMappingsResponse;

class ListAppVersionResourceMappingsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAppVersionResourceMappingsResponsePrivate(ListAppVersionResourceMappingsResponse * const q);

    void parseListAppVersionResourceMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppVersionResourceMappingsResponse)
    Q_DISABLE_COPY(ListAppVersionResourceMappingsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

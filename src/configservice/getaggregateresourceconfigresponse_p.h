// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATERESOURCECONFIGRESPONSE_P_H
#define QTAWS_GETAGGREGATERESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateResourceConfigResponse;

class GetAggregateResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetAggregateResourceConfigResponsePrivate(GetAggregateResourceConfigResponse * const q);

    void parseGetAggregateResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAggregateResourceConfigResponse)
    Q_DISABLE_COPY(GetAggregateResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAGGREGATIONAUTHORIZATIONRESPONSE_P_H
#define QTAWS_PUTAGGREGATIONAUTHORIZATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutAggregationAuthorizationResponse;

class PutAggregationAuthorizationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutAggregationAuthorizationResponsePrivate(PutAggregationAuthorizationResponse * const q);

    void parsePutAggregationAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAggregationAuthorizationResponse)
    Q_DISABLE_COPY(PutAggregationAuthorizationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

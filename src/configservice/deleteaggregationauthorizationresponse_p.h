// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGGREGATIONAUTHORIZATIONRESPONSE_P_H
#define QTAWS_DELETEAGGREGATIONAUTHORIZATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteAggregationAuthorizationResponse;

class DeleteAggregationAuthorizationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteAggregationAuthorizationResponsePrivate(DeleteAggregationAuthorizationResponse * const q);

    void parseDeleteAggregationAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAggregationAuthorizationResponse)
    Q_DISABLE_COPY(DeleteAggregationAuthorizationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

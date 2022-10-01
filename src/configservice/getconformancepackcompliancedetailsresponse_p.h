// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSRESPONSE_P_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceDetailsResponse;

class GetConformancePackComplianceDetailsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetConformancePackComplianceDetailsResponsePrivate(GetConformancePackComplianceDetailsResponse * const q);

    void parseGetConformancePackComplianceDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConformancePackComplianceDetailsResponse)
    Q_DISABLE_COPY(GetConformancePackComplianceDetailsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

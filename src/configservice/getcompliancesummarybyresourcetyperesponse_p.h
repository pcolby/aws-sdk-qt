// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPERESPONSE_P_H
#define QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByResourceTypeResponse;

class GetComplianceSummaryByResourceTypeResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetComplianceSummaryByResourceTypeResponsePrivate(GetComplianceSummaryByResourceTypeResponse * const q);

    void parseGetComplianceSummaryByResourceTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComplianceSummaryByResourceTypeResponse)
    Q_DISABLE_COPY(GetComplianceSummaryByResourceTypeResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSRESPONSE_P_H
#define QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConformancePackDetailedStatusResponse;

class GetOrganizationConformancePackDetailedStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetOrganizationConformancePackDetailedStatusResponsePrivate(GetOrganizationConformancePackDetailedStatusResponse * const q);

    void parseGetOrganizationConformancePackDetailedStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOrganizationConformancePackDetailedStatusResponse)
    Q_DISABLE_COPY(GetOrganizationConformancePackDetailedStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

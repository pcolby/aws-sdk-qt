// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESRESPONSE_P_H
#define QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class ListConformancePackComplianceScoresResponse;

class ListConformancePackComplianceScoresResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit ListConformancePackComplianceScoresResponsePrivate(ListConformancePackComplianceScoresResponse * const q);

    void parseListConformancePackComplianceScoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConformancePackComplianceScoresResponse)
    Q_DISABLE_COPY(ListConformancePackComplianceScoresResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

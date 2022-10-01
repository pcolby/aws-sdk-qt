// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONRESPONSE_P_H
#define QTAWS_PUTREPORTDEFINITIONRESPONSE_P_H

#include "costandusagereportresponse_p.h"

namespace QtAws {
namespace CostandUsageReport {

class PutReportDefinitionResponse;

class PutReportDefinitionResponsePrivate : public CostandUsageReportResponsePrivate {

public:

    explicit PutReportDefinitionResponsePrivate(PutReportDefinitionResponse * const q);

    void parsePutReportDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutReportDefinitionResponse)
    Q_DISABLE_COPY(PutReportDefinitionResponsePrivate)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

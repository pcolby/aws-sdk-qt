// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPORTDEFINITIONRESPONSE_P_H
#define QTAWS_MODIFYREPORTDEFINITIONRESPONSE_P_H

#include "costandusagereportresponse_p.h"

namespace QtAws {
namespace CostandUsageReport {

class ModifyReportDefinitionResponse;

class ModifyReportDefinitionResponsePrivate : public CostandUsageReportResponsePrivate {

public:

    explicit ModifyReportDefinitionResponsePrivate(ModifyReportDefinitionResponse * const q);

    void parseModifyReportDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReportDefinitionResponse)
    Q_DISABLE_COPY(ModifyReportDefinitionResponsePrivate)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

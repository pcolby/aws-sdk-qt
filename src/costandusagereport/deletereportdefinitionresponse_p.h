// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEREPORTDEFINITIONRESPONSE_P_H

#include "costandusagereportresponse_p.h"

namespace QtAws {
namespace CostandUsageReport {

class DeleteReportDefinitionResponse;

class DeleteReportDefinitionResponsePrivate : public CostandUsageReportResponsePrivate {

public:

    explicit DeleteReportDefinitionResponsePrivate(DeleteReportDefinitionResponse * const q);

    void parseDeleteReportDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReportDefinitionResponse)
    Q_DISABLE_COPY(DeleteReportDefinitionResponsePrivate)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

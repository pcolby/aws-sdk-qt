// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSREPORTRESPONSE_P_H
#define QTAWS_CREATEFINDINGSREPORTRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class CreateFindingsReportResponse;

class CreateFindingsReportResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit CreateFindingsReportResponsePrivate(CreateFindingsReportResponse * const q);

    void parseCreateFindingsReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFindingsReportResponse)
    Q_DISABLE_COPY(CreateFindingsReportResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif

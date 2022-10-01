// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELFINDINGSREPORTRESPONSE_P_H
#define QTAWS_CANCELFINDINGSREPORTRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class CancelFindingsReportResponse;

class CancelFindingsReportResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit CancelFindingsReportResponsePrivate(CancelFindingsReportResponse * const q);

    void parseCancelFindingsReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelFindingsReportResponse)
    Q_DISABLE_COPY(CancelFindingsReportResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif

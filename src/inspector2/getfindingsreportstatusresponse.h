// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTSTATUSRESPONSE_H
#define QTAWS_GETFINDINGSREPORTSTATUSRESPONSE_H

#include "inspector2response.h"
#include "getfindingsreportstatusrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetFindingsReportStatusResponsePrivate;

class QTAWSINSPECTOR2_EXPORT GetFindingsReportStatusResponse : public Inspector2Response {
    Q_OBJECT

public:
    GetFindingsReportStatusResponse(const GetFindingsReportStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsReportStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsReportStatusResponse)
    Q_DISABLE_COPY(GetFindingsReportStatusResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif

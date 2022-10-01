// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELFINDINGSREPORTRESPONSE_H
#define QTAWS_CANCELFINDINGSREPORTRESPONSE_H

#include "inspector2response.h"
#include "cancelfindingsreportrequest.h"

namespace QtAws {
namespace Inspector2 {

class CancelFindingsReportResponsePrivate;

class QTAWSINSPECTOR2_EXPORT CancelFindingsReportResponse : public Inspector2Response {
    Q_OBJECT

public:
    CancelFindingsReportResponse(const CancelFindingsReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelFindingsReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelFindingsReportResponse)
    Q_DISABLE_COPY(CancelFindingsReportResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSREPORTRESPONSE_H
#define QTAWS_CREATEFINDINGSREPORTRESPONSE_H

#include "inspector2response.h"
#include "createfindingsreportrequest.h"

namespace QtAws {
namespace Inspector2 {

class CreateFindingsReportResponsePrivate;

class QTAWSINSPECTOR2_EXPORT CreateFindingsReportResponse : public Inspector2Response {
    Q_OBJECT

public:
    CreateFindingsReportResponse(const CreateFindingsReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFindingsReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFindingsReportResponse)
    Q_DISABLE_COPY(CreateFindingsReportResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif

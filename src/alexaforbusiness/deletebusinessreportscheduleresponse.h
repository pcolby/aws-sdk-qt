// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUSINESSREPORTSCHEDULERESPONSE_H
#define QTAWS_DELETEBUSINESSREPORTSCHEDULERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deletebusinessreportschedulerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteBusinessReportScheduleResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteBusinessReportScheduleResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteBusinessReportScheduleResponse(const DeleteBusinessReportScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBusinessReportScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBusinessReportScheduleResponse)
    Q_DISABLE_COPY(DeleteBusinessReportScheduleResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

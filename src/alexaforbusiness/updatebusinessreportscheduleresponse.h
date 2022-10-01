// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUSINESSREPORTSCHEDULERESPONSE_H
#define QTAWS_UPDATEBUSINESSREPORTSCHEDULERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updatebusinessreportschedulerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateBusinessReportScheduleResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateBusinessReportScheduleResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateBusinessReportScheduleResponse(const UpdateBusinessReportScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBusinessReportScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBusinessReportScheduleResponse)
    Q_DISABLE_COPY(UpdateBusinessReportScheduleResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

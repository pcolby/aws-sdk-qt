// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUSINESSREPORTSCHEDULESRESPONSE_H
#define QTAWS_LISTBUSINESSREPORTSCHEDULESRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listbusinessreportschedulesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListBusinessReportSchedulesResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListBusinessReportSchedulesResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListBusinessReportSchedulesResponse(const ListBusinessReportSchedulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBusinessReportSchedulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBusinessReportSchedulesResponse)
    Q_DISABLE_COPY(ListBusinessReportSchedulesResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

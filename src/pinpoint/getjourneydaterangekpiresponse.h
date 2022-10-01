// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYDATERANGEKPIRESPONSE_H
#define QTAWS_GETJOURNEYDATERANGEKPIRESPONSE_H

#include "pinpointresponse.h"
#include "getjourneydaterangekpirequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyDateRangeKpiResponsePrivate;

class QTAWSPINPOINT_EXPORT GetJourneyDateRangeKpiResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetJourneyDateRangeKpiResponse(const GetJourneyDateRangeKpiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJourneyDateRangeKpiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyDateRangeKpiResponse)
    Q_DISABLE_COPY(GetJourneyDateRangeKpiResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

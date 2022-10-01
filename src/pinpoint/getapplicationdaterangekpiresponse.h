// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONDATERANGEKPIRESPONSE_H
#define QTAWS_GETAPPLICATIONDATERANGEKPIRESPONSE_H

#include "pinpointresponse.h"
#include "getapplicationdaterangekpirequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationDateRangeKpiResponsePrivate;

class QTAWSPINPOINT_EXPORT GetApplicationDateRangeKpiResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApplicationDateRangeKpiResponse(const GetApplicationDateRangeKpiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationDateRangeKpiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationDateRangeKpiResponse)
    Q_DISABLE_COPY(GetApplicationDateRangeKpiResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

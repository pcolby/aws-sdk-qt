// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONDATERANGEKPIRESPONSE_P_H
#define QTAWS_GETAPPLICATIONDATERANGEKPIRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationDateRangeKpiResponse;

class GetApplicationDateRangeKpiResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetApplicationDateRangeKpiResponsePrivate(GetApplicationDateRangeKpiResponse * const q);

    void parseGetApplicationDateRangeKpiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationDateRangeKpiResponse)
    Q_DISABLE_COPY(GetApplicationDateRangeKpiResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDASHBOARDRESPONSE_P_H
#define QTAWS_CREATEDASHBOARDRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateDashboardResponse;

class CreateDashboardResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateDashboardResponsePrivate(CreateDashboardResponse * const q);

    void parseCreateDashboardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDashboardResponse)
    Q_DISABLE_COPY(CreateDashboardResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDREQUEST_P_H
#define QTAWS_UPDATEDASHBOARDREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updatedashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateDashboardRequest;

class UpdateDashboardRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdateDashboardRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdateDashboardRequest * const q);
    UpdateDashboardRequestPrivate(const UpdateDashboardRequestPrivate &other,
                                   UpdateDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDREQUEST_P_H
#define QTAWS_DELETEDASHBOARDREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "deletedashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteDashboardRequest;

class DeleteDashboardRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DeleteDashboardRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DeleteDashboardRequest * const q);
    DeleteDashboardRequestPrivate(const DeleteDashboardRequestPrivate &other,
                                   DeleteDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

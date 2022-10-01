// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDASHBOARDREQUEST_P_H
#define QTAWS_CREATEDASHBOARDREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "createdashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateDashboardRequest;

class CreateDashboardRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreateDashboardRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreateDashboardRequest * const q);
    CreateDashboardRequestPrivate(const CreateDashboardRequestPrivate &other,
                                   CreateDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTALREQUEST_P_H
#define QTAWS_UPDATEPORTALREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updateportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdatePortalRequest;

class UpdatePortalRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdatePortalRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdatePortalRequest * const q);
    UpdatePortalRequestPrivate(const UpdatePortalRequestPrivate &other,
                                   UpdatePortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePortalRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

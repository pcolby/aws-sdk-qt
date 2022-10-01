// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTALREQUEST_P_H
#define QTAWS_CREATEPORTALREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "createportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreatePortalRequest;

class CreatePortalRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreatePortalRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreatePortalRequest * const q);
    CreatePortalRequestPrivate(const CreatePortalRequestPrivate &other,
                                   CreatePortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePortalRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMEREQUEST_P_H
#define QTAWS_UPDATEDOMAINNAMEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updatedomainnamerequest.h"

namespace QtAws {
namespace AppSync {

class UpdateDomainNameRequest;

class UpdateDomainNameRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateDomainNameRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateDomainNameRequest * const q);
    UpdateDomainNameRequestPrivate(const UpdateDomainNameRequestPrivate &other,
                                   UpdateDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainNameRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

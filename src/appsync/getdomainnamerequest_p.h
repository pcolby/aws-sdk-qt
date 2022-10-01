// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMEREQUEST_P_H
#define QTAWS_GETDOMAINNAMEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getdomainnamerequest.h"

namespace QtAws {
namespace AppSync {

class GetDomainNameRequest;

class GetDomainNameRequestPrivate : public AppSyncRequestPrivate {

public:
    GetDomainNameRequestPrivate(const AppSyncRequest::Action action,
                                   GetDomainNameRequest * const q);
    GetDomainNameRequestPrivate(const GetDomainNameRequestPrivate &other,
                                   GetDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainNameRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

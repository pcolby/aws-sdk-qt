// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMEREQUEST_P_H
#define QTAWS_DELETEDOMAINNAMEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "deletedomainnamerequest.h"

namespace QtAws {
namespace AppSync {

class DeleteDomainNameRequest;

class DeleteDomainNameRequestPrivate : public AppSyncRequestPrivate {

public:
    DeleteDomainNameRequestPrivate(const AppSyncRequest::Action action,
                                   DeleteDomainNameRequest * const q);
    DeleteDomainNameRequestPrivate(const DeleteDomainNameRequestPrivate &other,
                                   DeleteDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainNameRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

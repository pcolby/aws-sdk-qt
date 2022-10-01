// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPIREQUEST_P_H
#define QTAWS_ASSOCIATEAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "associateapirequest.h"

namespace QtAws {
namespace AppSync {

class AssociateApiRequest;

class AssociateApiRequestPrivate : public AppSyncRequestPrivate {

public:
    AssociateApiRequestPrivate(const AppSyncRequest::Action action,
                                   AssociateApiRequest * const q);
    AssociateApiRequestPrivate(const AssociateApiRequestPrivate &other,
                                   AssociateApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

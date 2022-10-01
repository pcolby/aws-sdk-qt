// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPEREQUEST_P_H
#define QTAWS_DELETETYPEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "deletetyperequest.h"

namespace QtAws {
namespace AppSync {

class DeleteTypeRequest;

class DeleteTypeRequestPrivate : public AppSyncRequestPrivate {

public:
    DeleteTypeRequestPrivate(const AppSyncRequest::Action action,
                                   DeleteTypeRequest * const q);
    DeleteTypeRequestPrivate(const DeleteTypeRequestPrivate &other,
                                   DeleteTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

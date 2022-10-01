// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPEREQUEST_P_H
#define QTAWS_UPDATETYPEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updatetyperequest.h"

namespace QtAws {
namespace AppSync {

class UpdateTypeRequest;

class UpdateTypeRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateTypeRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateTypeRequest * const q);
    UpdateTypeRequestPrivate(const UpdateTypeRequestPrivate &other,
                                   UpdateTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPEREQUEST_P_H
#define QTAWS_CREATETYPEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "createtyperequest.h"

namespace QtAws {
namespace AppSync {

class CreateTypeRequest;

class CreateTypeRequestPrivate : public AppSyncRequestPrivate {

public:
    CreateTypeRequestPrivate(const AppSyncRequest::Action action,
                                   CreateTypeRequest * const q);
    CreateTypeRequestPrivate(const CreateTypeRequestPrivate &other,
                                   CreateTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPEREQUEST_P_H
#define QTAWS_GETTYPEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "gettyperequest.h"

namespace QtAws {
namespace AppSync {

class GetTypeRequest;

class GetTypeRequestPrivate : public AppSyncRequestPrivate {

public:
    GetTypeRequestPrivate(const AppSyncRequest::Action action,
                                   GetTypeRequest * const q);
    GetTypeRequestPrivate(const GetTypeRequestPrivate &other,
                                   GetTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

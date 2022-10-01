// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHQLAPIREQUEST_P_H
#define QTAWS_CREATEGRAPHQLAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "creategraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class CreateGraphqlApiRequest;

class CreateGraphqlApiRequestPrivate : public AppSyncRequestPrivate {

public:
    CreateGraphqlApiRequestPrivate(const AppSyncRequest::Action action,
                                   CreateGraphqlApiRequest * const q);
    CreateGraphqlApiRequestPrivate(const CreateGraphqlApiRequestPrivate &other,
                                   CreateGraphqlApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

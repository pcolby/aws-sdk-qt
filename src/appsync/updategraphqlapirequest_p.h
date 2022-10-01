// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGRAPHQLAPIREQUEST_P_H
#define QTAWS_UPDATEGRAPHQLAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updategraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class UpdateGraphqlApiRequest;

class UpdateGraphqlApiRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateGraphqlApiRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateGraphqlApiRequest * const q);
    UpdateGraphqlApiRequestPrivate(const UpdateGraphqlApiRequestPrivate &other,
                                   UpdateGraphqlApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

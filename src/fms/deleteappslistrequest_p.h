// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPSLISTREQUEST_P_H
#define QTAWS_DELETEAPPSLISTREQUEST_P_H

#include "fmsrequest_p.h"
#include "deleteappslistrequest.h"

namespace QtAws {
namespace Fms {

class DeleteAppsListRequest;

class DeleteAppsListRequestPrivate : public FmsRequestPrivate {

public:
    DeleteAppsListRequestPrivate(const FmsRequest::Action action,
                                   DeleteAppsListRequest * const q);
    DeleteAppsListRequestPrivate(const DeleteAppsListRequestPrivate &other,
                                   DeleteAppsListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif

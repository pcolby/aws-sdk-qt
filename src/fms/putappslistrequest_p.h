// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPSLISTREQUEST_P_H
#define QTAWS_PUTAPPSLISTREQUEST_P_H

#include "fmsrequest_p.h"
#include "putappslistrequest.h"

namespace QtAws {
namespace Fms {

class PutAppsListRequest;

class PutAppsListRequestPrivate : public FmsRequestPrivate {

public:
    PutAppsListRequestPrivate(const FmsRequest::Action action,
                                   PutAppsListRequest * const q);
    PutAppsListRequestPrivate(const PutAppsListRequestPrivate &other,
                                   PutAppsListRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif

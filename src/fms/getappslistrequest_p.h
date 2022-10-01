// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSLISTREQUEST_P_H
#define QTAWS_GETAPPSLISTREQUEST_P_H

#include "fmsrequest_p.h"
#include "getappslistrequest.h"

namespace QtAws {
namespace Fms {

class GetAppsListRequest;

class GetAppsListRequestPrivate : public FmsRequestPrivate {

public:
    GetAppsListRequestPrivate(const FmsRequest::Action action,
                                   GetAppsListRequest * const q);
    GetAppsListRequestPrivate(const GetAppsListRequestPrivate &other,
                                   GetAppsListRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif

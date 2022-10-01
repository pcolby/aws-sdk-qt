// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSREQUEST_P_H
#define QTAWS_LISTAPPSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppsRequest;

class ListAppsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppsRequest * const q);
    ListAppsRequestPrivate(const ListAppsRequestPrivate &other,
                                   ListAppsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

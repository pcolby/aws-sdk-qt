// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHESREQUEST_P_H
#define QTAWS_LISTLAUNCHESREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "listlaunchesrequest.h"

namespace QtAws {
namespace Evidently {

class ListLaunchesRequest;

class ListLaunchesRequestPrivate : public EvidentlyRequestPrivate {

public:
    ListLaunchesRequestPrivate(const EvidentlyRequest::Action action,
                                   ListLaunchesRequest * const q);
    ListLaunchesRequestPrivate(const ListLaunchesRequestPrivate &other,
                                   ListLaunchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLaunchesRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

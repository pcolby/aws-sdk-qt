// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTPLATFORMAPPLICATIONSREQUEST_P_H

#include "snsrequest_p.h"
#include "listplatformapplicationsrequest.h"

namespace QtAws {
namespace Sns {

class ListPlatformApplicationsRequest;

class ListPlatformApplicationsRequestPrivate : public SnsRequestPrivate {

public:
    ListPlatformApplicationsRequestPrivate(const SnsRequest::Action action,
                                   ListPlatformApplicationsRequest * const q);
    ListPlatformApplicationsRequestPrivate(const ListPlatformApplicationsRequestPrivate &other,
                                   ListPlatformApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlatformApplicationsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

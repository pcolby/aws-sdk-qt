// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILESDKRELEASESREQUEST_P_H
#define QTAWS_LISTMOBILESDKRELEASESREQUEST_P_H

#include "wafv2request_p.h"
#include "listmobilesdkreleasesrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListMobileSdkReleasesRequest;

class ListMobileSdkReleasesRequestPrivate : public Wafv2RequestPrivate {

public:
    ListMobileSdkReleasesRequestPrivate(const Wafv2Request::Action action,
                                   ListMobileSdkReleasesRequest * const q);
    ListMobileSdkReleasesRequestPrivate(const ListMobileSdkReleasesRequestPrivate &other,
                                   ListMobileSdkReleasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMobileSdkReleasesRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

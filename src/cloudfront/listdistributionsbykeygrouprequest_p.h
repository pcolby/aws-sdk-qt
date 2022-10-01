// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYKEYGROUPREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSBYKEYGROUPREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsbykeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByKeyGroupRequest;

class ListDistributionsByKeyGroupRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsByKeyGroupRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsByKeyGroupRequest * const q);
    ListDistributionsByKeyGroupRequestPrivate(const ListDistributionsByKeyGroupRequestPrivate &other,
                                   ListDistributionsByKeyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

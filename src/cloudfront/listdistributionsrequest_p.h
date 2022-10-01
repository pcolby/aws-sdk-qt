// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsRequest;

class ListDistributionsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsRequest * const q);
    ListDistributionsRequestPrivate(const ListDistributionsRequestPrivate &other,
                                   ListDistributionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

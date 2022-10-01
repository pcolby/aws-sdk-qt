// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGDISTRIBUTIONSREQUEST_P_H
#define QTAWS_LISTSTREAMINGDISTRIBUTIONSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "liststreamingdistributionsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListStreamingDistributionsRequest;

class ListStreamingDistributionsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListStreamingDistributionsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListStreamingDistributionsRequest * const q);
    ListStreamingDistributionsRequestPrivate(const ListStreamingDistributionsRequestPrivate &other,
                                   ListStreamingDistributionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamingDistributionsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

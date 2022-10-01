// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHECKERIPRANGESREQUEST_P_H
#define QTAWS_GETCHECKERIPRANGESREQUEST_P_H

#include "route53request_p.h"
#include "getcheckeriprangesrequest.h"

namespace QtAws {
namespace Route53 {

class GetCheckerIpRangesRequest;

class GetCheckerIpRangesRequestPrivate : public Route53RequestPrivate {

public:
    GetCheckerIpRangesRequestPrivate(const Route53Request::Action action,
                                   GetCheckerIpRangesRequest * const q);
    GetCheckerIpRangesRequestPrivate(const GetCheckerIpRangesRequestPrivate &other,
                                   GetCheckerIpRangesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCheckerIpRangesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif

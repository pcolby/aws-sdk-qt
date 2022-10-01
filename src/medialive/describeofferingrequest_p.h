// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOFFERINGREQUEST_P_H
#define QTAWS_DESCRIBEOFFERINGREQUEST_P_H

#include "medialiverequest_p.h"
#include "describeofferingrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeOfferingRequest;

class DescribeOfferingRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeOfferingRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeOfferingRequest * const q);
    DescribeOfferingRequestPrivate(const DescribeOfferingRequestPrivate &other,
                                   DescribeOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOfferingRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

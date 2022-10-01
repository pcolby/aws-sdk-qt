// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUCKETSREQUEST_P_H
#define QTAWS_DESCRIBEBUCKETSREQUEST_P_H

#include "macie2request_p.h"
#include "describebucketsrequest.h"

namespace QtAws {
namespace Macie2 {

class DescribeBucketsRequest;

class DescribeBucketsRequestPrivate : public Macie2RequestPrivate {

public:
    DescribeBucketsRequestPrivate(const Macie2Request::Action action,
                                   DescribeBucketsRequest * const q);
    DescribeBucketsRequestPrivate(const DescribeBucketsRequestPrivate &other,
                                   DescribeBucketsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBucketsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

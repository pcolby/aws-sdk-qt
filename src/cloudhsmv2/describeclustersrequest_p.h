// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERSREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "describeclustersrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DescribeClustersRequest;

class DescribeClustersRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    DescribeClustersRequestPrivate(const CloudHsmV2Request::Action action,
                                   DescribeClustersRequest * const q);
    DescribeClustersRequestPrivate(const DescribeClustersRequestPrivate &other,
                                   DescribeClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClustersRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

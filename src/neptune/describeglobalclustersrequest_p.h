// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALCLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALCLUSTERSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describeglobalclustersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeGlobalClustersRequest;

class DescribeGlobalClustersRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeGlobalClustersRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeGlobalClustersRequest * const q);
    DescribeGlobalClustersRequestPrivate(const DescribeGlobalClustersRequestPrivate &other,
                                   DescribeGlobalClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalClustersRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXFIELDSREQUEST_P_H
#define QTAWS_DESCRIBEINDEXFIELDSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describeindexfieldsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeIndexFieldsRequest;

class DescribeIndexFieldsRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeIndexFieldsRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeIndexFieldsRequest * const q);
    DescribeIndexFieldsRequestPrivate(const DescribeIndexFieldsRequestPrivate &other,
                                   DescribeIndexFieldsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIndexFieldsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

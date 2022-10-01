// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEERRORSREQUEST_P_H
#define QTAWS_DESCRIBESERVICEERRORSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeserviceerrorsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeServiceErrorsRequest;

class DescribeServiceErrorsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeServiceErrorsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeServiceErrorsRequest * const q);
    DescribeServiceErrorsRequestPrivate(const DescribeServiceErrorsRequestPrivate &other,
                                   DescribeServiceErrorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceErrorsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

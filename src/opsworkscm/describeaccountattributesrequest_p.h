// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "describeaccountattributesrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeAccountAttributesRequest;

class DescribeAccountAttributesRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DescribeAccountAttributesRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DescribeAccountAttributesRequest * const q);
    DescribeAccountAttributesRequestPrivate(const DescribeAccountAttributesRequestPrivate &other,
                                   DescribeAccountAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAttributesRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICIPSREQUEST_P_H
#define QTAWS_DESCRIBEELASTICIPSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeelasticipsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticIpsRequest;

class DescribeElasticIpsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeElasticIpsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeElasticIpsRequest * const q);
    DescribeElasticIpsRequestPrivate(const DescribeElasticIpsRequestPrivate &other,
                                   DescribeElasticIpsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticIpsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

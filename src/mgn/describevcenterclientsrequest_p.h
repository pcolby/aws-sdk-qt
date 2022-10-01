// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVCENTERCLIENTSREQUEST_P_H
#define QTAWS_DESCRIBEVCENTERCLIENTSREQUEST_P_H

#include "mgnrequest_p.h"
#include "describevcenterclientsrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeVcenterClientsRequest;

class DescribeVcenterClientsRequestPrivate : public MgnRequestPrivate {

public:
    DescribeVcenterClientsRequestPrivate(const MgnRequest::Action action,
                                   DescribeVcenterClientsRequest * const q);
    DescribeVcenterClientsRequestPrivate(const DescribeVcenterClientsRequestPrivate &other,
                                   DescribeVcenterClientsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVcenterClientsRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

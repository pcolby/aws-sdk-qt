// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMANDSREQUEST_P_H
#define QTAWS_DESCRIBECOMMANDSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describecommandsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeCommandsRequest;

class DescribeCommandsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeCommandsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeCommandsRequest * const q);
    DescribeCommandsRequestPrivate(const DescribeCommandsRequestPrivate &other,
                                   DescribeCommandsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCommandsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

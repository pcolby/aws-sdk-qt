// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWMODULEREQUEST_P_H
#define QTAWS_DESCRIBECONTACTFLOWMODULEREQUEST_P_H

#include "connectrequest_p.h"
#include "describecontactflowmodulerequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowModuleRequest;

class DescribeContactFlowModuleRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeContactFlowModuleRequestPrivate(const ConnectRequest::Action action,
                                   DescribeContactFlowModuleRequest * const q);
    DescribeContactFlowModuleRequestPrivate(const DescribeContactFlowModuleRequestPrivate &other,
                                   DescribeContactFlowModuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContactFlowModuleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

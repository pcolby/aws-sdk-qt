// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINEREQUEST_P_H
#define QTAWS_DESCRIBESTATEMACHINEREQUEST_P_H

#include "sfnrequest_p.h"
#include "describestatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineRequest;

class DescribeStateMachineRequestPrivate : public SfnRequestPrivate {

public:
    DescribeStateMachineRequestPrivate(const SfnRequest::Action action,
                                   DescribeStateMachineRequest * const q);
    DescribeStateMachineRequestPrivate(const DescribeStateMachineRequestPrivate &other,
                                   DescribeStateMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif

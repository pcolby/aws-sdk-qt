// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWTYPEREQUEST_P_H
#define QTAWS_DESCRIBEWORKFLOWTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "describeworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowTypeRequest;

class DescribeWorkflowTypeRequestPrivate : public SwfRequestPrivate {

public:
    DescribeWorkflowTypeRequestPrivate(const SwfRequest::Action action,
                                   DescribeWorkflowTypeRequest * const q);
    DescribeWorkflowTypeRequestPrivate(const DescribeWorkflowTypeRequestPrivate &other,
                                   DescribeWorkflowTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif

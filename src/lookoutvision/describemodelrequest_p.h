// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELREQUEST_P_H
#define QTAWS_DESCRIBEMODELREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "describemodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelRequest;

class DescribeModelRequestPrivate : public LookoutVisionRequestPrivate {

public:
    DescribeModelRequestPrivate(const LookoutVisionRequest::Action action,
                                   DescribeModelRequest * const q);
    DescribeModelRequestPrivate(const DescribeModelRequestPrivate &other,
                                   DescribeModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

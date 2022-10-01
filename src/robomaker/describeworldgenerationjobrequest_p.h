// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDGENERATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEWORLDGENERATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describeworldgenerationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldGenerationJobRequest;

class DescribeWorldGenerationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeWorldGenerationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeWorldGenerationJobRequest * const q);
    DescribeWorldGenerationJobRequestPrivate(const DescribeWorldGenerationJobRequestPrivate &other,
                                   DescribeWorldGenerationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorldGenerationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

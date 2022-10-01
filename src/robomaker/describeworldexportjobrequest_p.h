// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDEXPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEWORLDEXPORTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describeworldexportjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldExportJobRequest;

class DescribeWorldExportJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeWorldExportJobRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeWorldExportJobRequest * const q);
    DescribeWorldExportJobRequestPrivate(const DescribeWorldExportJobRequestPrivate &other,
                                   DescribeWorldExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorldExportJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

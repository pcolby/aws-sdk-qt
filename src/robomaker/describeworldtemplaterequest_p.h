// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDTEMPLATEREQUEST_P_H
#define QTAWS_DESCRIBEWORLDTEMPLATEREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describeworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldTemplateRequest;

class DescribeWorldTemplateRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeWorldTemplateRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeWorldTemplateRequest * const q);
    DescribeWorldTemplateRequestPrivate(const DescribeWorldTemplateRequestPrivate &other,
                                   DescribeWorldTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

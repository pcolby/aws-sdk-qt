// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBTEMPLATEREQUEST_P_H
#define QTAWS_DESCRIBEJOBTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "describejobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeJobTemplateRequest;

class DescribeJobTemplateRequestPrivate : public IoTRequestPrivate {

public:
    DescribeJobTemplateRequestPrivate(const IoTRequest::Action action,
                                   DescribeJobTemplateRequest * const q);
    DescribeJobTemplateRequestPrivate(const DescribeJobTemplateRequestPrivate &other,
                                   DescribeJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

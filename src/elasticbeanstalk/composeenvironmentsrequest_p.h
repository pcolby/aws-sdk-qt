// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPOSEENVIRONMENTSREQUEST_P_H
#define QTAWS_COMPOSEENVIRONMENTSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "composeenvironmentsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ComposeEnvironmentsRequest;

class ComposeEnvironmentsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    ComposeEnvironmentsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   ComposeEnvironmentsRequest * const q);
    ComposeEnvironmentsRequestPrivate(const ComposeEnvironmentsRequestPrivate &other,
                                   ComposeEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ComposeEnvironmentsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

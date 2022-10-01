// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONVERSIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "createapplicationversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateApplicationVersionRequest;

class CreateApplicationVersionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    CreateApplicationVersionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   CreateApplicationVersionRequest * const q);
    CreateApplicationVersionRequestPrivate(const CreateApplicationVersionRequestPrivate &other,
                                   CreateApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

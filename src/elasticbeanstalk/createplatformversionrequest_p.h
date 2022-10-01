// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMVERSIONREQUEST_P_H
#define QTAWS_CREATEPLATFORMVERSIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "createplatformversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreatePlatformVersionRequest;

class CreatePlatformVersionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    CreatePlatformVersionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   CreatePlatformVersionRequest * const q);
    CreatePlatformVersionRequestPrivate(const CreatePlatformVersionRequestPrivate &other,
                                   CreatePlatformVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlatformVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMVERSIONREQUEST_P_H
#define QTAWS_DELETEPLATFORMVERSIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "deleteplatformversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeletePlatformVersionRequest;

class DeletePlatformVersionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DeletePlatformVersionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DeletePlatformVersionRequest * const q);
    DeletePlatformVersionRequestPrivate(const DeletePlatformVersionRequestPrivate &other,
                                   DeletePlatformVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlatformVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONVERSIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "deleteapplicationversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteApplicationVersionRequest;

class DeleteApplicationVersionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DeleteApplicationVersionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DeleteApplicationVersionRequest * const q);
    DeleteApplicationVersionRequestPrivate(const DeleteApplicationVersionRequestPrivate &other,
                                   DeleteApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

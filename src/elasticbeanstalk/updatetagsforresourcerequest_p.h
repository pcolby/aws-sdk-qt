// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORRESOURCEREQUEST_P_H
#define QTAWS_UPDATETAGSFORRESOURCEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "updatetagsforresourcerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateTagsForResourceRequest;

class UpdateTagsForResourceRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    UpdateTagsForResourceRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   UpdateTagsForResourceRequest * const q);
    UpdateTagsForResourceRequestPrivate(const UpdateTagsForResourceRequestPrivate &other,
                                   UpdateTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTagsForResourceRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

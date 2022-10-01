// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCEREQUEST_P_H
#define QTAWS_ADDTAGSTORESOURCEREQUEST_P_H

#include "elasticacherequest_p.h"
#include "addtagstoresourcerequest.h"

namespace QtAws {
namespace ElastiCache {

class AddTagsToResourceRequest;

class AddTagsToResourceRequestPrivate : public ElastiCacheRequestPrivate {

public:
    AddTagsToResourceRequestPrivate(const ElastiCacheRequest::Action action,
                                   AddTagsToResourceRequest * const q);
    AddTagsToResourceRequestPrivate(const AddTagsToResourceRequestPrivate &other,
                                   AddTagsToResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsToResourceRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

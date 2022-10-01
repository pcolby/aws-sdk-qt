// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGETAGSFORRESOURCEREQUEST_P_H
#define QTAWS_CHANGETAGSFORRESOURCEREQUEST_P_H

#include "route53request_p.h"
#include "changetagsforresourcerequest.h"

namespace QtAws {
namespace Route53 {

class ChangeTagsForResourceRequest;

class ChangeTagsForResourceRequestPrivate : public Route53RequestPrivate {

public:
    ChangeTagsForResourceRequestPrivate(const Route53Request::Action action,
                                   ChangeTagsForResourceRequest * const q);
    ChangeTagsForResourceRequestPrivate(const ChangeTagsForResourceRequestPrivate &other,
                                   ChangeTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeTagsForResourceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif

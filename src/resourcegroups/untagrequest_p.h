// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGREQUEST_P_H
#define QTAWS_UNTAGREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "untagrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UntagRequest;

class UntagRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    UntagRequestPrivate(const ResourceGroupsRequest::Action action,
                                   UntagRequest * const q);
    UntagRequestPrivate(const UntagRequestPrivate &other,
                                   UntagRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

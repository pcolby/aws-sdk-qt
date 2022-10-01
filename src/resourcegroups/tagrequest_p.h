// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGREQUEST_P_H
#define QTAWS_TAGREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "tagrequest.h"

namespace QtAws {
namespace ResourceGroups {

class TagRequest;

class TagRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    TagRequestPrivate(const ResourceGroupsRequest::Action action,
                                   TagRequest * const q);
    TagRequestPrivate(const TagRequestPrivate &other,
                                   TagRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGKEYSREQUEST_P_H
#define QTAWS_GETTAGKEYSREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "gettagkeysrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagKeysRequest;

class GetTagKeysRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    GetTagKeysRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   GetTagKeysRequest * const q);
    GetTagKeysRequestPrivate(const GetTagKeysRequestPrivate &other,
                                   GetTagKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTagKeysRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

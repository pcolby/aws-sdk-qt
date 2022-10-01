// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGVALUESREQUEST_P_H
#define QTAWS_GETTAGVALUESREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "gettagvaluesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagValuesRequest;

class GetTagValuesRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    GetTagValuesRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   GetTagValuesRequest * const q);
    GetTagValuesRequestPrivate(const GetTagValuesRequestPrivate &other,
                                   GetTagValuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTagValuesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

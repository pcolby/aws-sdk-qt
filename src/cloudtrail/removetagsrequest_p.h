// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSREQUEST_P_H
#define QTAWS_REMOVETAGSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "removetagsrequest.h"

namespace QtAws {
namespace CloudTrail {

class RemoveTagsRequest;

class RemoveTagsRequestPrivate : public CloudTrailRequestPrivate {

public:
    RemoveTagsRequestPrivate(const CloudTrailRequest::Action action,
                                   RemoveTagsRequest * const q);
    RemoveTagsRequestPrivate(const RemoveTagsRequestPrivate &other,
                                   RemoveTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

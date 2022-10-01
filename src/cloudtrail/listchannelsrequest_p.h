// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSREQUEST_P_H
#define QTAWS_LISTCHANNELSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "listchannelsrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListChannelsRequest;

class ListChannelsRequestPrivate : public CloudTrailRequestPrivate {

public:
    ListChannelsRequestPrivate(const CloudTrailRequest::Action action,
                                   ListChannelsRequest * const q);
    ListChannelsRequestPrivate(const ListChannelsRequestPrivate &other,
                                   ListChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

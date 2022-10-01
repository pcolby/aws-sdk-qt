// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELREQUEST_P_H
#define QTAWS_GETCHANNELREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "getchannelrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetChannelRequest;

class GetChannelRequestPrivate : public CloudTrailRequestPrivate {

public:
    GetChannelRequestPrivate(const CloudTrailRequest::Action action,
                                   GetChannelRequest * const q);
    GetChannelRequestPrivate(const GetChannelRequestPrivate &other,
                                   GetChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

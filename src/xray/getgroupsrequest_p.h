// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSREQUEST_P_H
#define QTAWS_GETGROUPSREQUEST_P_H

#include "xrayrequest_p.h"
#include "getgroupsrequest.h"

namespace QtAws {
namespace XRay {

class GetGroupsRequest;

class GetGroupsRequestPrivate : public XRayRequestPrivate {

public:
    GetGroupsRequestPrivate(const XRayRequest::Action action,
                                   GetGroupsRequest * const q);
    GetGroupsRequestPrivate(const GetGroupsRequestPrivate &other,
                                   GetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif

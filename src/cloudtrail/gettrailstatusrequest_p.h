// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILSTATUSREQUEST_P_H
#define QTAWS_GETTRAILSTATUSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "gettrailstatusrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailStatusRequest;

class GetTrailStatusRequestPrivate : public CloudTrailRequestPrivate {

public:
    GetTrailStatusRequestPrivate(const CloudTrailRequest::Action action,
                                   GetTrailStatusRequest * const q);
    GetTrailStatusRequestPrivate(const GetTrailStatusRequestPrivate &other,
                                   GetTrailStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrailStatusRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

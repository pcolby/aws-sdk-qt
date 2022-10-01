// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILREQUEST_P_H
#define QTAWS_GETTRAILREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "gettrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailRequest;

class GetTrailRequestPrivate : public CloudTrailRequestPrivate {

public:
    GetTrailRequestPrivate(const CloudTrailRequest::Action action,
                                   GetTrailRequest * const q);
    GetTrailRequestPrivate(const GetTrailRequestPrivate &other,
                                   GetTrailRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

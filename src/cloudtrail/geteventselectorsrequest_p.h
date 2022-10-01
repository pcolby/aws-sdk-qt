// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSELECTORSREQUEST_P_H
#define QTAWS_GETEVENTSELECTORSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "geteventselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetEventSelectorsRequest;

class GetEventSelectorsRequestPrivate : public CloudTrailRequestPrivate {

public:
    GetEventSelectorsRequestPrivate(const CloudTrailRequest::Action action,
                                   GetEventSelectorsRequest * const q);
    GetEventSelectorsRequestPrivate(const GetEventSelectorsRequestPrivate &other,
                                   GetEventSelectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventSelectorsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

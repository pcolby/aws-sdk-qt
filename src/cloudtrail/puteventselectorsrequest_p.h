// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSELECTORSREQUEST_P_H
#define QTAWS_PUTEVENTSELECTORSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "puteventselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class PutEventSelectorsRequest;

class PutEventSelectorsRequestPrivate : public CloudTrailRequestPrivate {

public:
    PutEventSelectorsRequestPrivate(const CloudTrailRequest::Action action,
                                   PutEventSelectorsRequest * const q);
    PutEventSelectorsRequestPrivate(const PutEventSelectorsRequestPrivate &other,
                                   PutEventSelectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventSelectorsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTLOGBUCKETREQUEST_P_H
#define QTAWS_ASSOCIATEDRTLOGBUCKETREQUEST_P_H

#include "shieldrequest_p.h"
#include "associatedrtlogbucketrequest.h"

namespace QtAws {
namespace Shield {

class AssociateDRTLogBucketRequest;

class AssociateDRTLogBucketRequestPrivate : public ShieldRequestPrivate {

public:
    AssociateDRTLogBucketRequestPrivate(const ShieldRequest::Action action,
                                   AssociateDRTLogBucketRequest * const q);
    AssociateDRTLogBucketRequestPrivate(const AssociateDRTLogBucketRequestPrivate &other,
                                   AssociateDRTLogBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDRTLogBucketRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

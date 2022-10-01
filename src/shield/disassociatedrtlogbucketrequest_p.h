// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTLOGBUCKETREQUEST_P_H
#define QTAWS_DISASSOCIATEDRTLOGBUCKETREQUEST_P_H

#include "shieldrequest_p.h"
#include "disassociatedrtlogbucketrequest.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTLogBucketRequest;

class DisassociateDRTLogBucketRequestPrivate : public ShieldRequestPrivate {

public:
    DisassociateDRTLogBucketRequestPrivate(const ShieldRequest::Action action,
                                   DisassociateDRTLogBucketRequest * const q);
    DisassociateDRTLogBucketRequestPrivate(const DisassociateDRTLogBucketRequestPrivate &other,
                                   DisassociateDRTLogBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDRTLogBucketRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

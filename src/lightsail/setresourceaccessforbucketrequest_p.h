// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRESOURCEACCESSFORBUCKETREQUEST_P_H
#define QTAWS_SETRESOURCEACCESSFORBUCKETREQUEST_P_H

#include "lightsailrequest_p.h"
#include "setresourceaccessforbucketrequest.h"

namespace QtAws {
namespace Lightsail {

class SetResourceAccessForBucketRequest;

class SetResourceAccessForBucketRequestPrivate : public LightsailRequestPrivate {

public:
    SetResourceAccessForBucketRequestPrivate(const LightsailRequest::Action action,
                                   SetResourceAccessForBucketRequest * const q);
    SetResourceAccessForBucketRequestPrivate(const SetResourceAccessForBucketRequestPrivate &other,
                                   SetResourceAccessForBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetResourceAccessForBucketRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

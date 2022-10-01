// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETREQUEST_P_H
#define QTAWS_UPDATEBUCKETREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updatebucketrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketRequest;

class UpdateBucketRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateBucketRequestPrivate(const LightsailRequest::Action action,
                                   UpdateBucketRequest * const q);
    UpdateBucketRequestPrivate(const UpdateBucketRequestPrivate &other,
                                   UpdateBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBucketRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

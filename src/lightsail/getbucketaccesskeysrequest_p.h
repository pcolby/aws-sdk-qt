// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCESSKEYSREQUEST_P_H
#define QTAWS_GETBUCKETACCESSKEYSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getbucketaccesskeysrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketAccessKeysRequest;

class GetBucketAccessKeysRequestPrivate : public LightsailRequestPrivate {

public:
    GetBucketAccessKeysRequestPrivate(const LightsailRequest::Action action,
                                   GetBucketAccessKeysRequest * const q);
    GetBucketAccessKeysRequestPrivate(const GetBucketAccessKeysRequestPrivate &other,
                                   GetBucketAccessKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketAccessKeysRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

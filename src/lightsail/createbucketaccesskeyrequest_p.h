// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETACCESSKEYREQUEST_P_H
#define QTAWS_CREATEBUCKETACCESSKEYREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createbucketaccesskeyrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateBucketAccessKeyRequest;

class CreateBucketAccessKeyRequestPrivate : public LightsailRequestPrivate {

public:
    CreateBucketAccessKeyRequestPrivate(const LightsailRequest::Action action,
                                   CreateBucketAccessKeyRequest * const q);
    CreateBucketAccessKeyRequestPrivate(const CreateBucketAccessKeyRequestPrivate &other,
                                   CreateBucketAccessKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBucketAccessKeyRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETACCESSKEYREQUEST_P_H
#define QTAWS_DELETEBUCKETACCESSKEYREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletebucketaccesskeyrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteBucketAccessKeyRequest;

class DeleteBucketAccessKeyRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteBucketAccessKeyRequestPrivate(const LightsailRequest::Action action,
                                   DeleteBucketAccessKeyRequest * const q);
    DeleteBucketAccessKeyRequestPrivate(const DeleteBucketAccessKeyRequestPrivate &other,
                                   DeleteBucketAccessKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketAccessKeyRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

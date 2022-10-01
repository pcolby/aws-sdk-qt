// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICKEYREQUEST_P_H
#define QTAWS_DELETEPUBLICKEYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletepublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeletePublicKeyRequest;

class DeletePublicKeyRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeletePublicKeyRequestPrivate(const CloudFrontRequest::Action action,
                                   DeletePublicKeyRequest * const q);
    DeletePublicKeyRequestPrivate(const DeletePublicKeyRequestPrivate &other,
                                   DeletePublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

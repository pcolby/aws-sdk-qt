// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICKEYREQUEST_P_H
#define QTAWS_CREATEPUBLICKEYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createpublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreatePublicKeyRequest;

class CreatePublicKeyRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreatePublicKeyRequestPrivate(const CloudFrontRequest::Action action,
                                   CreatePublicKeyRequest * const q);
    CreatePublicKeyRequestPrivate(const CreatePublicKeyRequestPrivate &other,
                                   CreatePublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

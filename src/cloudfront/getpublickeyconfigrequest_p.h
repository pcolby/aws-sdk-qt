// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYCONFIGREQUEST_P_H
#define QTAWS_GETPUBLICKEYCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getpublickeyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetPublicKeyConfigRequest;

class GetPublicKeyConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetPublicKeyConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetPublicKeyConfigRequest * const q);
    GetPublicKeyConfigRequestPrivate(const GetPublicKeyConfigRequestPrivate &other,
                                   GetPublicKeyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPublicKeyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

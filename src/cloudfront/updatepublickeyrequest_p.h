// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICKEYREQUEST_P_H
#define QTAWS_UPDATEPUBLICKEYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatepublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdatePublicKeyRequest;

class UpdatePublicKeyRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdatePublicKeyRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdatePublicKeyRequest * const q);
    UpdatePublicKeyRequestPrivate(const UpdatePublicKeyRequestPrivate &other,
                                   UpdatePublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

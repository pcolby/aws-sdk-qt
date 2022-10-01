// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVALIDATIONREQUEST_P_H
#define QTAWS_CREATEINVALIDATIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createinvalidationrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateInvalidationRequest;

class CreateInvalidationRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateInvalidationRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateInvalidationRequest * const q);
    CreateInvalidationRequestPrivate(const CreateInvalidationRequestPrivate &other,
                                   CreateInvalidationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInvalidationRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYGROUPREQUEST_P_H
#define QTAWS_CREATEKEYGROUPREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createkeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class CreateKeyGroupRequest;

class CreateKeyGroupRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateKeyGroupRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateKeyGroupRequest * const q);
    CreateKeyGroupRequestPrivate(const CreateKeyGroupRequestPrivate &other,
                                   CreateKeyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

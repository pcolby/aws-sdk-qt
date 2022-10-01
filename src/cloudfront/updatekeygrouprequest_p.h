// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYGROUPREQUEST_P_H
#define QTAWS_UPDATEKEYGROUPREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatekeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateKeyGroupRequest;

class UpdateKeyGroupRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateKeyGroupRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateKeyGroupRequest * const q);
    UpdateKeyGroupRequestPrivate(const UpdateKeyGroupRequestPrivate &other,
                                   UpdateKeyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

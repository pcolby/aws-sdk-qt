// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPREQUEST_P_H
#define QTAWS_GETKEYGROUPREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getkeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupRequest;

class GetKeyGroupRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetKeyGroupRequestPrivate(const CloudFrontRequest::Action action,
                                   GetKeyGroupRequest * const q);
    GetKeyGroupRequestPrivate(const GetKeyGroupRequestPrivate &other,
                                   GetKeyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

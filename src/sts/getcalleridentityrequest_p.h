// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLERIDENTITYREQUEST_P_H
#define QTAWS_GETCALLERIDENTITYREQUEST_P_H

#include "stsrequest_p.h"
#include "getcalleridentityrequest.h"

namespace QtAws {
namespace Sts {

class GetCallerIdentityRequest;

class GetCallerIdentityRequestPrivate : public StsRequestPrivate {

public:
    GetCallerIdentityRequestPrivate(const StsRequest::Action action,
                                   GetCallerIdentityRequest * const q);
    GetCallerIdentityRequestPrivate(const GetCallerIdentityRequestPrivate &other,
                                   GetCallerIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCallerIdentityRequest)

};

} // namespace Sts
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYREQUEST_P_H
#define QTAWS_GETEMAILIDENTITYREQUEST_P_H

#include "sesv2request_p.h"
#include "getemailidentityrequest.h"

namespace QtAws {
namespace SESv2 {

class GetEmailIdentityRequest;

class GetEmailIdentityRequestPrivate : public SESv2RequestPrivate {

public:
    GetEmailIdentityRequestPrivate(const SESv2Request::Action action,
                                   GetEmailIdentityRequest * const q);
    GetEmailIdentityRequestPrivate(const GetEmailIdentityRequestPrivate &other,
                                   GetEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEmailIdentityRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

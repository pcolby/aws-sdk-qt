// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONTOKENREQUEST_P_H
#define QTAWS_GETSESSIONTOKENREQUEST_P_H

#include "stsrequest_p.h"
#include "getsessiontokenrequest.h"

namespace QtAws {
namespace Sts {

class GetSessionTokenRequest;

class GetSessionTokenRequestPrivate : public StsRequestPrivate {

public:
    GetSessionTokenRequestPrivate(const StsRequest::Action action,
                                   GetSessionTokenRequest * const q);
    GetSessionTokenRequestPrivate(const GetSessionTokenRequestPrivate &other,
                                   GetSessionTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSessionTokenRequest)

};

} // namespace Sts
} // namespace QtAws

#endif

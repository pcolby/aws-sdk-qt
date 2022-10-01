// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEDERATIONTOKENREQUEST_P_H
#define QTAWS_GETFEDERATIONTOKENREQUEST_P_H

#include "stsrequest_p.h"
#include "getfederationtokenrequest.h"

namespace QtAws {
namespace Sts {

class GetFederationTokenRequest;

class GetFederationTokenRequestPrivate : public StsRequestPrivate {

public:
    GetFederationTokenRequestPrivate(const StsRequest::Action action,
                                   GetFederationTokenRequest * const q);
    GetFederationTokenRequestPrivate(const GetFederationTokenRequestPrivate &other,
                                   GetFederationTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFederationTokenRequest)

};

} // namespace Sts
} // namespace QtAws

#endif

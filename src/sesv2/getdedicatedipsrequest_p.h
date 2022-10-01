// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSREQUEST_P_H
#define QTAWS_GETDEDICATEDIPSREQUEST_P_H

#include "sesv2request_p.h"
#include "getdedicatedipsrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDedicatedIpsRequest;

class GetDedicatedIpsRequestPrivate : public SESv2RequestPrivate {

public:
    GetDedicatedIpsRequestPrivate(const SESv2Request::Action action,
                                   GetDedicatedIpsRequest * const q);
    GetDedicatedIpsRequestPrivate(const GetDedicatedIpsRequestPrivate &other,
                                   GetDedicatedIpsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDedicatedIpsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

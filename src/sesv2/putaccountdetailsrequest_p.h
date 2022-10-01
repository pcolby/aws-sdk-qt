// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDETAILSREQUEST_P_H
#define QTAWS_PUTACCOUNTDETAILSREQUEST_P_H

#include "sesv2request_p.h"
#include "putaccountdetailsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDetailsRequest;

class PutAccountDetailsRequestPrivate : public SESv2RequestPrivate {

public:
    PutAccountDetailsRequestPrivate(const SESv2Request::Action action,
                                   PutAccountDetailsRequest * const q);
    PutAccountDetailsRequestPrivate(const PutAccountDetailsRequestPrivate &other,
                                   PutAccountDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountDetailsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

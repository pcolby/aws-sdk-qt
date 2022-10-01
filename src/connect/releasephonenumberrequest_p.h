// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEPHONENUMBERREQUEST_P_H
#define QTAWS_RELEASEPHONENUMBERREQUEST_P_H

#include "connectrequest_p.h"
#include "releasephonenumberrequest.h"

namespace QtAws {
namespace Connect {

class ReleasePhoneNumberRequest;

class ReleasePhoneNumberRequestPrivate : public ConnectRequestPrivate {

public:
    ReleasePhoneNumberRequestPrivate(const ConnectRequest::Action action,
                                   ReleasePhoneNumberRequest * const q);
    ReleasePhoneNumberRequestPrivate(const ReleasePhoneNumberRequestPrivate &other,
                                   ReleasePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleasePhoneNumberRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

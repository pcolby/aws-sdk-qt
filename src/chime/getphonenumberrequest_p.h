// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERREQUEST_P_H
#define QTAWS_GETPHONENUMBERREQUEST_P_H

#include "chimerequest_p.h"
#include "getphonenumberrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberRequest;

class GetPhoneNumberRequestPrivate : public ChimeRequestPrivate {

public:
    GetPhoneNumberRequestPrivate(const ChimeRequest::Action action,
                                   GetPhoneNumberRequest * const q);
    GetPhoneNumberRequestPrivate(const GetPhoneNumberRequestPrivate &other,
                                   GetPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

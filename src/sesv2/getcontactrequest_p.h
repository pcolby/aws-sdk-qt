// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTREQUEST_P_H
#define QTAWS_GETCONTACTREQUEST_P_H

#include "sesv2request_p.h"
#include "getcontactrequest.h"

namespace QtAws {
namespace SESv2 {

class GetContactRequest;

class GetContactRequestPrivate : public SESv2RequestPrivate {

public:
    GetContactRequestPrivate(const SESv2Request::Action action,
                                   GetContactRequest * const q);
    GetContactRequestPrivate(const GetContactRequestPrivate &other,
                                   GetContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

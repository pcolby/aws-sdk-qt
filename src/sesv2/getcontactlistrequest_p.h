// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTLISTREQUEST_P_H
#define QTAWS_GETCONTACTLISTREQUEST_P_H

#include "sesv2request_p.h"
#include "getcontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class GetContactListRequest;

class GetContactListRequestPrivate : public SESv2RequestPrivate {

public:
    GetContactListRequestPrivate(const SESv2Request::Action action,
                                   GetContactListRequest * const q);
    GetContactListRequestPrivate(const GetContactListRequestPrivate &other,
                                   GetContactListRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

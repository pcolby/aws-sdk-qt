// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTLISTREQUEST_P_H
#define QTAWS_CREATECONTACTLISTREQUEST_P_H

#include "sesv2request_p.h"
#include "createcontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateContactListRequest;

class CreateContactListRequestPrivate : public SESv2RequestPrivate {

public:
    CreateContactListRequestPrivate(const SESv2Request::Action action,
                                   CreateContactListRequest * const q);
    CreateContactListRequestPrivate(const CreateContactListRequestPrivate &other,
                                   CreateContactListRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

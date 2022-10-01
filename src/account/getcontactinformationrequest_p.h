// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTINFORMATIONREQUEST_P_H
#define QTAWS_GETCONTACTINFORMATIONREQUEST_P_H

#include "accountrequest_p.h"
#include "getcontactinformationrequest.h"

namespace QtAws {
namespace Account {

class GetContactInformationRequest;

class GetContactInformationRequestPrivate : public AccountRequestPrivate {

public:
    GetContactInformationRequestPrivate(const AccountRequest::Action action,
                                   GetContactInformationRequest * const q);
    GetContactInformationRequestPrivate(const GetContactInformationRequestPrivate &other,
                                   GetContactInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactInformationRequest)

};

} // namespace Account
} // namespace QtAws

#endif

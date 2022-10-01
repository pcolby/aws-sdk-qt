// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTINFORMATIONREQUEST_P_H
#define QTAWS_PUTCONTACTINFORMATIONREQUEST_P_H

#include "accountrequest_p.h"
#include "putcontactinformationrequest.h"

namespace QtAws {
namespace Account {

class PutContactInformationRequest;

class PutContactInformationRequestPrivate : public AccountRequestPrivate {

public:
    PutContactInformationRequestPrivate(const AccountRequest::Action action,
                                   PutContactInformationRequest * const q);
    PutContactInformationRequestPrivate(const PutContactInformationRequestPrivate &other,
                                   PutContactInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutContactInformationRequest)

};

} // namespace Account
} // namespace QtAws

#endif

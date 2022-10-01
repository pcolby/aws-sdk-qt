// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONTACTFROMADDRESSBOOKREQUEST_P_H
#define QTAWS_DISASSOCIATECONTACTFROMADDRESSBOOKREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "disassociatecontactfromaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateContactFromAddressBookRequest;

class DisassociateContactFromAddressBookRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DisassociateContactFromAddressBookRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DisassociateContactFromAddressBookRequest * const q);
    DisassociateContactFromAddressBookRequestPrivate(const DisassociateContactFromAddressBookRequestPrivate &other,
                                   DisassociateContactFromAddressBookRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateContactFromAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

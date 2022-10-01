// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKREQUEST_P_H
#define QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "associatecontactwithaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateContactWithAddressBookRequest;

class AssociateContactWithAddressBookRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    AssociateContactWithAddressBookRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   AssociateContactWithAddressBookRequest * const q);
    AssociateContactWithAddressBookRequestPrivate(const AssociateContactWithAddressBookRequestPrivate &other,
                                   AssociateContactWithAddressBookRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateContactWithAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

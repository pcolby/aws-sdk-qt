// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSBOOKREQUEST_P_H
#define QTAWS_CREATEADDRESSBOOKREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateAddressBookRequest;

class CreateAddressBookRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateAddressBookRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateAddressBookRequest * const q);
    CreateAddressBookRequestPrivate(const CreateAddressBookRequestPrivate &other,
                                   CreateAddressBookRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDRESSBOOKREQUEST_P_H
#define QTAWS_UPDATEADDRESSBOOKREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updateaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateAddressBookRequest;

class UpdateAddressBookRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateAddressBookRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateAddressBookRequest * const q);
    UpdateAddressBookRequestPrivate(const UpdateAddressBookRequestPrivate &other,
                                   UpdateAddressBookRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

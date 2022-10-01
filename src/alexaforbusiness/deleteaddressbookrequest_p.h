// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADDRESSBOOKREQUEST_P_H
#define QTAWS_DELETEADDRESSBOOKREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deleteaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteAddressBookRequest;

class DeleteAddressBookRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteAddressBookRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteAddressBookRequest * const q);
    DeleteAddressBookRequestPrivate(const DeleteAddressBookRequestPrivate &other,
                                   DeleteAddressBookRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTREQUEST_P_H
#define QTAWS_CREATECONTACTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "createcontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactRequest;

class CreateContactRequestPrivate : public SsmContactsRequestPrivate {

public:
    CreateContactRequestPrivate(const SsmContactsRequest::Action action,
                                   CreateContactRequest * const q);
    CreateContactRequestPrivate(const CreateContactRequestPrivate &other,
                                   CreateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

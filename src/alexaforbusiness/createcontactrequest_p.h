// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTREQUEST_P_H
#define QTAWS_CREATECONTACTREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createcontactrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateContactRequest;

class CreateContactRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateContactRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateContactRequest * const q);
    CreateContactRequestPrivate(const CreateContactRequestPrivate &other,
                                   CreateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

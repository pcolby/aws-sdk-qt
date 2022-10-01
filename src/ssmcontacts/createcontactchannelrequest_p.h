// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTCHANNELREQUEST_P_H
#define QTAWS_CREATECONTACTCHANNELREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "createcontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactChannelRequest;

class CreateContactChannelRequestPrivate : public SsmContactsRequestPrivate {

public:
    CreateContactChannelRequestPrivate(const SsmContactsRequest::Action action,
                                   CreateContactChannelRequest * const q);
    CreateContactChannelRequestPrivate(const CreateContactChannelRequestPrivate &other,
                                   CreateContactChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

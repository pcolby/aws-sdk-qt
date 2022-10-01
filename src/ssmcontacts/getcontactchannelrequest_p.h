// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTCHANNELREQUEST_P_H
#define QTAWS_GETCONTACTCHANNELREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "getcontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactChannelRequest;

class GetContactChannelRequestPrivate : public SsmContactsRequestPrivate {

public:
    GetContactChannelRequestPrivate(const SsmContactsRequest::Action action,
                                   GetContactChannelRequest * const q);
    GetContactChannelRequestPrivate(const GetContactChannelRequestPrivate &other,
                                   GetContactChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

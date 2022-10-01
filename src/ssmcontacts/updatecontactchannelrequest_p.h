// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTCHANNELREQUEST_P_H
#define QTAWS_UPDATECONTACTCHANNELREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "updatecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class UpdateContactChannelRequest;

class UpdateContactChannelRequestPrivate : public SsmContactsRequestPrivate {

public:
    UpdateContactChannelRequestPrivate(const SsmContactsRequest::Action action,
                                   UpdateContactChannelRequest * const q);
    UpdateContactChannelRequestPrivate(const UpdateContactChannelRequestPrivate &other,
                                   UpdateContactChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATECONTACTCHANNELREQUEST_P_H
#define QTAWS_ACTIVATECONTACTCHANNELREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "activatecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class ActivateContactChannelRequest;

class ActivateContactChannelRequestPrivate : public SsmContactsRequestPrivate {

public:
    ActivateContactChannelRequestPrivate(const SsmContactsRequest::Action action,
                                   ActivateContactChannelRequest * const q);
    ActivateContactChannelRequestPrivate(const ActivateContactChannelRequestPrivate &other,
                                   ActivateContactChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

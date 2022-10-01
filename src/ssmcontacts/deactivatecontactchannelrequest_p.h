// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATECONTACTCHANNELREQUEST_P_H
#define QTAWS_DEACTIVATECONTACTCHANNELREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "deactivatecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeactivateContactChannelRequest;

class DeactivateContactChannelRequestPrivate : public SsmContactsRequestPrivate {

public:
    DeactivateContactChannelRequestPrivate(const SsmContactsRequest::Action action,
                                   DeactivateContactChannelRequest * const q);
    DeactivateContactChannelRequestPrivate(const DeactivateContactChannelRequestPrivate &other,
                                   DeactivateContactChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

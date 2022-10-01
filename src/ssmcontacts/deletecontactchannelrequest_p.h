// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTCHANNELREQUEST_P_H
#define QTAWS_DELETECONTACTCHANNELREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "deletecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeleteContactChannelRequest;

class DeleteContactChannelRequestPrivate : public SsmContactsRequestPrivate {

public:
    DeleteContactChannelRequestPrivate(const SsmContactsRequest::Action action,
                                   DeleteContactChannelRequest * const q);
    DeleteContactChannelRequestPrivate(const DeleteContactChannelRequestPrivate &other,
                                   DeleteContactChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

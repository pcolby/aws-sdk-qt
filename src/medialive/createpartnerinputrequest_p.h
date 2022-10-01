// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNERINPUTREQUEST_P_H
#define QTAWS_CREATEPARTNERINPUTREQUEST_P_H

#include "medialiverequest_p.h"
#include "createpartnerinputrequest.h"

namespace QtAws {
namespace MediaLive {

class CreatePartnerInputRequest;

class CreatePartnerInputRequestPrivate : public MediaLiveRequestPrivate {

public:
    CreatePartnerInputRequestPrivate(const MediaLiveRequest::Action action,
                                   CreatePartnerInputRequest * const q);
    CreatePartnerInputRequestPrivate(const CreatePartnerInputRequestPrivate &other,
                                   CreatePartnerInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePartnerInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

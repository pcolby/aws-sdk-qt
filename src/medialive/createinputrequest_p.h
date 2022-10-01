// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTREQUEST_P_H
#define QTAWS_CREATEINPUTREQUEST_P_H

#include "medialiverequest_p.h"
#include "createinputrequest.h"

namespace QtAws {
namespace MediaLive {

class CreateInputRequest;

class CreateInputRequestPrivate : public MediaLiveRequestPrivate {

public:
    CreateInputRequestPrivate(const MediaLiveRequest::Action action,
                                   CreateInputRequest * const q);
    CreateInputRequestPrivate(const CreateInputRequestPrivate &other,
                                   CreateInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

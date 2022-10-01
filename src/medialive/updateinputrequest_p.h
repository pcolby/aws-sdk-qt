// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTREQUEST_P_H
#define QTAWS_UPDATEINPUTREQUEST_P_H

#include "medialiverequest_p.h"
#include "updateinputrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputRequest;

class UpdateInputRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateInputRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateInputRequest * const q);
    UpdateInputRequestPrivate(const UpdateInputRequestPrivate &other,
                                   UpdateInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

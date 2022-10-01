// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXPROGRAMREQUEST_P_H
#define QTAWS_UPDATEMULTIPLEXPROGRAMREQUEST_P_H

#include "medialiverequest_p.h"
#include "updatemultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexProgramRequest;

class UpdateMultiplexProgramRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateMultiplexProgramRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateMultiplexProgramRequest * const q);
    UpdateMultiplexProgramRequestPrivate(const UpdateMultiplexProgramRequestPrivate &other,
                                   UpdateMultiplexProgramRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

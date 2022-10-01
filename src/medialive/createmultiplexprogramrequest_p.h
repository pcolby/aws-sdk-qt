// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXPROGRAMREQUEST_P_H
#define QTAWS_CREATEMULTIPLEXPROGRAMREQUEST_P_H

#include "medialiverequest_p.h"
#include "createmultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexProgramRequest;

class CreateMultiplexProgramRequestPrivate : public MediaLiveRequestPrivate {

public:
    CreateMultiplexProgramRequestPrivate(const MediaLiveRequest::Action action,
                                   CreateMultiplexProgramRequest * const q);
    CreateMultiplexProgramRequestPrivate(const CreateMultiplexProgramRequestPrivate &other,
                                   CreateMultiplexProgramRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

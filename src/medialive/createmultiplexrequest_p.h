// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXREQUEST_P_H
#define QTAWS_CREATEMULTIPLEXREQUEST_P_H

#include "medialiverequest_p.h"
#include "createmultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexRequest;

class CreateMultiplexRequestPrivate : public MediaLiveRequestPrivate {

public:
    CreateMultiplexRequestPrivate(const MediaLiveRequest::Action action,
                                   CreateMultiplexRequest * const q);
    CreateMultiplexRequestPrivate(const CreateMultiplexRequestPrivate &other,
                                   CreateMultiplexRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

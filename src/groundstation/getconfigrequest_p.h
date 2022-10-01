// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGREQUEST_P_H
#define QTAWS_GETCONFIGREQUEST_P_H

#include "groundstationrequest_p.h"
#include "getconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class GetConfigRequest;

class GetConfigRequestPrivate : public GroundStationRequestPrivate {

public:
    GetConfigRequestPrivate(const GroundStationRequest::Action action,
                                   GetConfigRequest * const q);
    GetConfigRequestPrivate(const GetConfigRequestPrivate &other,
                                   GetConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

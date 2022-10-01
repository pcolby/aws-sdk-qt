// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKCONFIGURATIONREQUEST_P_H
#define QTAWS_GETPLAYBACKCONFIGURATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "getplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetPlaybackConfigurationRequest;

class GetPlaybackConfigurationRequestPrivate : public MediaTailorRequestPrivate {

public:
    GetPlaybackConfigurationRequestPrivate(const MediaTailorRequest::Action action,
                                   GetPlaybackConfigurationRequest * const q);
    GetPlaybackConfigurationRequestPrivate(const GetPlaybackConfigurationRequestPrivate &other,
                                   GetPlaybackConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

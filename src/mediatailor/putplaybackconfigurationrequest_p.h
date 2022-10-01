// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPLAYBACKCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTPLAYBACKCONFIGURATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "putplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class PutPlaybackConfigurationRequest;

class PutPlaybackConfigurationRequestPrivate : public MediaTailorRequestPrivate {

public:
    PutPlaybackConfigurationRequestPrivate(const MediaTailorRequest::Action action,
                                   PutPlaybackConfigurationRequest * const q);
    PutPlaybackConfigurationRequestPrivate(const PutPlaybackConfigurationRequestPrivate &other,
                                   PutPlaybackConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

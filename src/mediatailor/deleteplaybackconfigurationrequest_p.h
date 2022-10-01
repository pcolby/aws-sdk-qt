// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEPLAYBACKCONFIGURATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deleteplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeletePlaybackConfigurationRequest;

class DeletePlaybackConfigurationRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeletePlaybackConfigurationRequestPrivate(const MediaTailorRequest::Action action,
                                   DeletePlaybackConfigurationRequest * const q);
    DeletePlaybackConfigurationRequestPrivate(const DeletePlaybackConfigurationRequestPrivate &other,
                                   DeletePlaybackConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

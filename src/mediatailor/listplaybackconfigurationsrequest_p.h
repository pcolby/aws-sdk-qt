// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTPLAYBACKCONFIGURATIONSREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "listplaybackconfigurationsrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListPlaybackConfigurationsRequest;

class ListPlaybackConfigurationsRequestPrivate : public MediaTailorRequestPrivate {

public:
    ListPlaybackConfigurationsRequestPrivate(const MediaTailorRequest::Action action,
                                   ListPlaybackConfigurationsRequest * const q);
    ListPlaybackConfigurationsRequestPrivate(const ListPlaybackConfigurationsRequestPrivate &other,
                                   ListPlaybackConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlaybackConfigurationsRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKKEYPAIRSREQUEST_P_H
#define QTAWS_LISTPLAYBACKKEYPAIRSREQUEST_P_H

#include "ivsrequest_p.h"
#include "listplaybackkeypairsrequest.h"

namespace QtAws {
namespace Ivs {

class ListPlaybackKeyPairsRequest;

class ListPlaybackKeyPairsRequestPrivate : public IvsRequestPrivate {

public:
    ListPlaybackKeyPairsRequestPrivate(const IvsRequest::Action action,
                                   ListPlaybackKeyPairsRequest * const q);
    ListPlaybackKeyPairsRequestPrivate(const ListPlaybackKeyPairsRequestPrivate &other,
                                   ListPlaybackKeyPairsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlaybackKeyPairsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

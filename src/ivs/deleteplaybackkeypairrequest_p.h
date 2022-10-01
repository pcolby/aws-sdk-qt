// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKKEYPAIRREQUEST_P_H
#define QTAWS_DELETEPLAYBACKKEYPAIRREQUEST_P_H

#include "ivsrequest_p.h"
#include "deleteplaybackkeypairrequest.h"

namespace QtAws {
namespace Ivs {

class DeletePlaybackKeyPairRequest;

class DeletePlaybackKeyPairRequestPrivate : public IvsRequestPrivate {

public:
    DeletePlaybackKeyPairRequestPrivate(const IvsRequest::Action action,
                                   DeletePlaybackKeyPairRequest * const q);
    DeletePlaybackKeyPairRequestPrivate(const DeletePlaybackKeyPairRequestPrivate &other,
                                   DeletePlaybackKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlaybackKeyPairRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

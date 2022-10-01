// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKKEYPAIRREQUEST_P_H
#define QTAWS_GETPLAYBACKKEYPAIRREQUEST_P_H

#include "ivsrequest_p.h"
#include "getplaybackkeypairrequest.h"

namespace QtAws {
namespace Ivs {

class GetPlaybackKeyPairRequest;

class GetPlaybackKeyPairRequestPrivate : public IvsRequestPrivate {

public:
    GetPlaybackKeyPairRequestPrivate(const IvsRequest::Action action,
                                   GetPlaybackKeyPairRequest * const q);
    GetPlaybackKeyPairRequestPrivate(const GetPlaybackKeyPairRequestPrivate &other,
                                   GetPlaybackKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPlaybackKeyPairRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

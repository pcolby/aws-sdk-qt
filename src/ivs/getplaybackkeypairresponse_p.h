// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKKEYPAIRRESPONSE_P_H
#define QTAWS_GETPLAYBACKKEYPAIRRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class GetPlaybackKeyPairResponse;

class GetPlaybackKeyPairResponsePrivate : public IvsResponsePrivate {

public:

    explicit GetPlaybackKeyPairResponsePrivate(GetPlaybackKeyPairResponse * const q);

    void parseGetPlaybackKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPlaybackKeyPairResponse)
    Q_DISABLE_COPY(GetPlaybackKeyPairResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif

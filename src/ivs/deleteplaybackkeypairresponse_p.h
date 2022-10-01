// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKKEYPAIRRESPONSE_P_H
#define QTAWS_DELETEPLAYBACKKEYPAIRRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class DeletePlaybackKeyPairResponse;

class DeletePlaybackKeyPairResponsePrivate : public IvsResponsePrivate {

public:

    explicit DeletePlaybackKeyPairResponsePrivate(DeletePlaybackKeyPairResponse * const q);

    void parseDeletePlaybackKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlaybackKeyPairResponse)
    Q_DISABLE_COPY(DeletePlaybackKeyPairResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif

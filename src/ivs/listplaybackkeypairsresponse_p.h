// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKKEYPAIRSRESPONSE_P_H
#define QTAWS_LISTPLAYBACKKEYPAIRSRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class ListPlaybackKeyPairsResponse;

class ListPlaybackKeyPairsResponsePrivate : public IvsResponsePrivate {

public:

    explicit ListPlaybackKeyPairsResponsePrivate(ListPlaybackKeyPairsResponse * const q);

    void parseListPlaybackKeyPairsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlaybackKeyPairsResponse)
    Q_DISABLE_COPY(ListPlaybackKeyPairsResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif

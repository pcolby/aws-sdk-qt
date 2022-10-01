// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSRESPONSE_P_H
#define QTAWS_LISTBOTSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListBotsResponse;

class ListBotsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListBotsResponsePrivate(ListBotsResponse * const q);

    void parseListBotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotsResponse)
    Q_DISABLE_COPY(ListBotsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

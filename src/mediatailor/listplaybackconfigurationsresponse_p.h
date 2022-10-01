// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTPLAYBACKCONFIGURATIONSRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ListPlaybackConfigurationsResponse;

class ListPlaybackConfigurationsResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ListPlaybackConfigurationsResponsePrivate(ListPlaybackConfigurationsResponse * const q);

    void parseListPlaybackConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlaybackConfigurationsResponse)
    Q_DISABLE_COPY(ListPlaybackConfigurationsResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

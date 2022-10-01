// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETPLAYBACKCONFIGURATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class GetPlaybackConfigurationResponse;

class GetPlaybackConfigurationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit GetPlaybackConfigurationResponsePrivate(GetPlaybackConfigurationResponse * const q);

    void parseGetPlaybackConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPlaybackConfigurationResponse)
    Q_DISABLE_COPY(GetPlaybackConfigurationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

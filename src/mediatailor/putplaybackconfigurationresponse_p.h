// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPLAYBACKCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTPLAYBACKCONFIGURATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class PutPlaybackConfigurationResponse;

class PutPlaybackConfigurationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit PutPlaybackConfigurationResponsePrivate(PutPlaybackConfigurationResponse * const q);

    void parsePutPlaybackConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPlaybackConfigurationResponse)
    Q_DISABLE_COPY(PutPlaybackConfigurationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

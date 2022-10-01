// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEPLAYBACKCONFIGURATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeletePlaybackConfigurationResponse;

class DeletePlaybackConfigurationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeletePlaybackConfigurationResponsePrivate(DeletePlaybackConfigurationResponse * const q);

    void parseDeletePlaybackConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlaybackConfigurationResponse)
    Q_DISABLE_COPY(DeletePlaybackConfigurationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

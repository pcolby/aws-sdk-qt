// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateImageGenerationConfigurationResponse;

class UpdateImageGenerationConfigurationResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit UpdateImageGenerationConfigurationResponsePrivate(UpdateImageGenerationConfigurationResponse * const q);

    void parseUpdateImageGenerationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateImageGenerationConfigurationResponse)
    Q_DISABLE_COPY(UpdateImageGenerationConfigurationResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif

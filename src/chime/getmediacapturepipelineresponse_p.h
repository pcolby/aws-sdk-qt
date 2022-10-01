// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIACAPTUREPIPELINERESPONSE_P_H
#define QTAWS_GETMEDIACAPTUREPIPELINERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetMediaCapturePipelineResponse;

class GetMediaCapturePipelineResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetMediaCapturePipelineResponsePrivate(GetMediaCapturePipelineResponse * const q);

    void parseGetMediaCapturePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMediaCapturePipelineResponse)
    Q_DISABLE_COPY(GetMediaCapturePipelineResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

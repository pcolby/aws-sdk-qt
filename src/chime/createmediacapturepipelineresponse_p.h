// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACAPTUREPIPELINERESPONSE_P_H
#define QTAWS_CREATEMEDIACAPTUREPIPELINERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateMediaCapturePipelineResponse;

class CreateMediaCapturePipelineResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateMediaCapturePipelineResponsePrivate(CreateMediaCapturePipelineResponse * const q);

    void parseCreateMediaCapturePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMediaCapturePipelineResponse)
    Q_DISABLE_COPY(CreateMediaCapturePipelineResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

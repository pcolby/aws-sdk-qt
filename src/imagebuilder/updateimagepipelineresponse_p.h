// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPIPELINERESPONSE_P_H
#define QTAWS_UPDATEIMAGEPIPELINERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateImagePipelineResponse;

class UpdateImagePipelineResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit UpdateImagePipelineResponsePrivate(UpdateImagePipelineResponse * const q);

    void parseUpdateImagePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateImagePipelineResponse)
    Q_DISABLE_COPY(UpdateImagePipelineResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

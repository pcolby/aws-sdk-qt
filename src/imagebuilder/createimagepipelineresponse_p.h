// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEPIPELINERESPONSE_P_H
#define QTAWS_CREATEIMAGEPIPELINERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImagePipelineResponse;

class CreateImagePipelineResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit CreateImagePipelineResponsePrivate(CreateImagePipelineResponse * const q);

    void parseCreateImagePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImagePipelineResponse)
    Q_DISABLE_COPY(CreateImagePipelineResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPIPELINERESPONSE_P_H
#define QTAWS_GETIMAGEPIPELINERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePipelineResponse;

class GetImagePipelineResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetImagePipelineResponsePrivate(GetImagePipelineResponse * const q);

    void parseGetImagePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImagePipelineResponse)
    Q_DISABLE_COPY(GetImagePipelineResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

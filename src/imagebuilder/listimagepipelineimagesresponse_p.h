// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINEIMAGESRESPONSE_P_H
#define QTAWS_LISTIMAGEPIPELINEIMAGESRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelineImagesResponse;

class ListImagePipelineImagesResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListImagePipelineImagesResponsePrivate(ListImagePipelineImagesResponse * const q);

    void parseListImagePipelineImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImagePipelineImagesResponse)
    Q_DISABLE_COPY(ListImagePipelineImagesResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

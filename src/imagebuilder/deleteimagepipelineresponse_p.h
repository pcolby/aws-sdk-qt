// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPIPELINERESPONSE_P_H
#define QTAWS_DELETEIMAGEPIPELINERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImagePipelineResponse;

class DeleteImagePipelineResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit DeleteImagePipelineResponsePrivate(DeleteImagePipelineResponse * const q);

    void parseDeleteImagePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImagePipelineResponse)
    Q_DISABLE_COPY(DeleteImagePipelineResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

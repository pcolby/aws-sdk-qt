// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_STARTIMAGEPIPELINEEXECUTIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class StartImagePipelineExecutionResponse;

class StartImagePipelineExecutionResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit StartImagePipelineExecutionResponsePrivate(StartImagePipelineExecutionResponse * const q);

    void parseStartImagePipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImagePipelineExecutionResponse)
    Q_DISABLE_COPY(StartImagePipelineExecutionResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

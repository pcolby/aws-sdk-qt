// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENDERUITEMPLATERESPONSE_P_H
#define QTAWS_RENDERUITEMPLATERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class RenderUiTemplateResponse;

class RenderUiTemplateResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit RenderUiTemplateResponsePrivate(RenderUiTemplateResponse * const q);

    void parseRenderUiTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RenderUiTemplateResponse)
    Q_DISABLE_COPY(RenderUiTemplateResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENDERUITEMPLATERESPONSE_H
#define QTAWS_RENDERUITEMPLATERESPONSE_H

#include "sagemakerresponse.h"
#include "renderuitemplaterequest.h"

namespace QtAws {
namespace SageMaker {

class RenderUiTemplateResponsePrivate;

class QTAWSSAGEMAKER_EXPORT RenderUiTemplateResponse : public SageMakerResponse {
    Q_OBJECT

public:
    RenderUiTemplateResponse(const RenderUiTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RenderUiTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenderUiTemplateResponse)
    Q_DISABLE_COPY(RenderUiTemplateResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

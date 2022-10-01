// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENDERUITEMPLATEREQUEST_P_H
#define QTAWS_RENDERUITEMPLATEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "renderuitemplaterequest.h"

namespace QtAws {
namespace SageMaker {

class RenderUiTemplateRequest;

class RenderUiTemplateRequestPrivate : public SageMakerRequestPrivate {

public:
    RenderUiTemplateRequestPrivate(const SageMakerRequest::Action action,
                                   RenderUiTemplateRequest * const q);
    RenderUiTemplateRequestPrivate(const RenderUiTemplateRequestPrivate &other,
                                   RenderUiTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RenderUiTemplateRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

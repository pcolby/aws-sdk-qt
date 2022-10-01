// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENDERUITEMPLATEREQUEST_H
#define QTAWS_RENDERUITEMPLATEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class RenderUiTemplateRequestPrivate;

class QTAWSSAGEMAKER_EXPORT RenderUiTemplateRequest : public SageMakerRequest {

public:
    RenderUiTemplateRequest(const RenderUiTemplateRequest &other);
    RenderUiTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenderUiTemplateRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOLIFECYCLECONFIGRESPONSE_H
#define QTAWS_CREATESTUDIOLIFECYCLECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "createstudiolifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateStudioLifecycleConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateStudioLifecycleConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateStudioLifecycleConfigResponse(const CreateStudioLifecycleConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStudioLifecycleConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioLifecycleConfigResponse)
    Q_DISABLE_COPY(CreateStudioLifecycleConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

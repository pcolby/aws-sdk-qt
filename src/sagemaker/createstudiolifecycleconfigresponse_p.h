// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOLIFECYCLECONFIGRESPONSE_P_H
#define QTAWS_CREATESTUDIOLIFECYCLECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateStudioLifecycleConfigResponse;

class CreateStudioLifecycleConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateStudioLifecycleConfigResponsePrivate(CreateStudioLifecycleConfigResponse * const q);

    void parseCreateStudioLifecycleConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStudioLifecycleConfigResponse)
    Q_DISABLE_COPY(CreateStudioLifecycleConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

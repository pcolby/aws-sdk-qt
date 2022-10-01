// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOLIFECYCLECONFIGRESPONSE_P_H
#define QTAWS_DELETESTUDIOLIFECYCLECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteStudioLifecycleConfigResponse;

class DeleteStudioLifecycleConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteStudioLifecycleConfigResponsePrivate(DeleteStudioLifecycleConfigResponse * const q);

    void parseDeleteStudioLifecycleConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStudioLifecycleConfigResponse)
    Q_DISABLE_COPY(DeleteStudioLifecycleConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

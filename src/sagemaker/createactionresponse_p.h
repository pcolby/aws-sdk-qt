// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONRESPONSE_P_H
#define QTAWS_CREATEACTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateActionResponse;

class CreateActionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateActionResponsePrivate(CreateActionResponse * const q);

    void parseCreateActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateActionResponse)
    Q_DISABLE_COPY(CreateActionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPRESPONSE_P_H
#define QTAWS_CREATEAPPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateAppResponse;

class CreateAppResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateAppResponsePrivate(CreateAppResponse * const q);

    void parseCreateAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppResponse)
    Q_DISABLE_COPY(CreateAppResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

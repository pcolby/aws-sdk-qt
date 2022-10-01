// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHUMANTASKUIRESPONSE_P_H
#define QTAWS_CREATEHUMANTASKUIRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateHumanTaskUiResponse;

class CreateHumanTaskUiResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateHumanTaskUiResponsePrivate(CreateHumanTaskUiResponse * const q);

    void parseCreateHumanTaskUiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHumanTaskUiResponse)
    Q_DISABLE_COPY(CreateHumanTaskUiResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

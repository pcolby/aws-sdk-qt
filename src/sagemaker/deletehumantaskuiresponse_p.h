// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANTASKUIRESPONSE_P_H
#define QTAWS_DELETEHUMANTASKUIRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteHumanTaskUiResponse;

class DeleteHumanTaskUiResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteHumanTaskUiResponsePrivate(DeleteHumanTaskUiResponse * const q);

    void parseDeleteHumanTaskUiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHumanTaskUiResponse)
    Q_DISABLE_COPY(DeleteHumanTaskUiResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

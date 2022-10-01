// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONRESPONSE_P_H
#define QTAWS_UPDATEACTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateActionResponse;

class UpdateActionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateActionResponsePrivate(UpdateActionResponse * const q);

    void parseUpdateActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateActionResponse)
    Q_DISABLE_COPY(UpdateActionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

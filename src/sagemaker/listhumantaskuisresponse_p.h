// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANTASKUISRESPONSE_P_H
#define QTAWS_LISTHUMANTASKUISRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListHumanTaskUisResponse;

class ListHumanTaskUisResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListHumanTaskUisResponsePrivate(ListHumanTaskUisResponse * const q);

    void parseListHumanTaskUisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHumanTaskUisResponse)
    Q_DISABLE_COPY(ListHumanTaskUisResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

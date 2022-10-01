// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALCOMPONENTSRESPONSE_P_H
#define QTAWS_LISTTRIALCOMPONENTSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListTrialComponentsResponse;

class ListTrialComponentsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListTrialComponentsResponsePrivate(ListTrialComponentsResponse * const q);

    void parseListTrialComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrialComponentsResponse)
    Q_DISABLE_COPY(ListTrialComponentsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

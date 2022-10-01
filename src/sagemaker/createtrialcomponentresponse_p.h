// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALCOMPONENTRESPONSE_P_H
#define QTAWS_CREATETRIALCOMPONENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialComponentResponse;

class CreateTrialComponentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateTrialComponentResponsePrivate(CreateTrialComponentResponse * const q);

    void parseCreateTrialComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrialComponentResponse)
    Q_DISABLE_COPY(CreateTrialComponentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

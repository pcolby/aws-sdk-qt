// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALCOMPONENTRESPONSE_P_H
#define QTAWS_UPDATETRIALCOMPONENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialComponentResponse;

class UpdateTrialComponentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateTrialComponentResponsePrivate(UpdateTrialComponentResponse * const q);

    void parseUpdateTrialComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrialComponentResponse)
    Q_DISABLE_COPY(UpdateTrialComponentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

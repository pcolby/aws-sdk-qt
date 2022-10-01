// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALRESPONSE_P_H
#define QTAWS_CREATETRIALRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialResponse;

class CreateTrialResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateTrialResponsePrivate(CreateTrialResponse * const q);

    void parseCreateTrialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrialResponse)
    Q_DISABLE_COPY(CreateTrialResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

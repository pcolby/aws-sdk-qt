// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALRESPONSE_P_H
#define QTAWS_UPDATETRIALRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialResponse;

class UpdateTrialResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateTrialResponsePrivate(UpdateTrialResponse * const q);

    void parseUpdateTrialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrialResponse)
    Q_DISABLE_COPY(UpdateTrialResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

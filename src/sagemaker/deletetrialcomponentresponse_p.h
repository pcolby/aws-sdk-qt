// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALCOMPONENTRESPONSE_P_H
#define QTAWS_DELETETRIALCOMPONENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialComponentResponse;

class DeleteTrialComponentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteTrialComponentResponsePrivate(DeleteTrialComponentResponse * const q);

    void parseDeleteTrialComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrialComponentResponse)
    Q_DISABLE_COPY(DeleteTrialComponentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

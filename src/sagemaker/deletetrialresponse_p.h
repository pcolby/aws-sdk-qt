// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALRESPONSE_P_H
#define QTAWS_DELETETRIALRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialResponse;

class DeleteTrialResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteTrialResponsePrivate(DeleteTrialResponse * const q);

    void parseDeleteTrialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrialResponse)
    Q_DISABLE_COPY(DeleteTrialResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

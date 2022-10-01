// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFORCERESPONSE_P_H
#define QTAWS_UPDATEWORKFORCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkforceResponse;

class UpdateWorkforceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateWorkforceResponsePrivate(UpdateWorkforceResponse * const q);

    void parseUpdateWorkforceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkforceResponse)
    Q_DISABLE_COPY(UpdateWorkforceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

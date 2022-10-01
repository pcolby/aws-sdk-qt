// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFORCERESPONSE_P_H
#define QTAWS_CREATEWORKFORCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkforceResponse;

class CreateWorkforceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateWorkforceResponsePrivate(CreateWorkforceResponse * const q);

    void parseCreateWorkforceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkforceResponse)
    Q_DISABLE_COPY(CreateWorkforceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

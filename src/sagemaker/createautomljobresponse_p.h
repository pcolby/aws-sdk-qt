// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOMLJOBRESPONSE_P_H
#define QTAWS_CREATEAUTOMLJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateAutoMLJobResponse;

class CreateAutoMLJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateAutoMLJobResponsePrivate(CreateAutoMLJobResponse * const q);

    void parseCreateAutoMLJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAutoMLJobResponse)
    Q_DISABLE_COPY(CreateAutoMLJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

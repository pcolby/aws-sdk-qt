// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTEXTRESPONSE_P_H
#define QTAWS_CREATECONTEXTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateContextResponse;

class CreateContextResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateContextResponsePrivate(CreateContextResponse * const q);

    void parseCreateContextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContextResponse)
    Q_DISABLE_COPY(CreateContextResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

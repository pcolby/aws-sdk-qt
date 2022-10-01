// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTEXTRESPONSE_P_H
#define QTAWS_UPDATECONTEXTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateContextResponse;

class UpdateContextResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateContextResponsePrivate(UpdateContextResponse * const q);

    void parseUpdateContextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContextResponse)
    Q_DISABLE_COPY(UpdateContextResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTEXTRESPONSE_P_H
#define QTAWS_DELETECONTEXTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteContextResponse;

class DeleteContextResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteContextResponsePrivate(DeleteContextResponse * const q);

    void parseDeleteContextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContextResponse)
    Q_DISABLE_COPY(DeleteContextResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONRESPONSE_P_H
#define QTAWS_DELETEACTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteActionResponse;

class DeleteActionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteActionResponsePrivate(DeleteActionResponse * const q);

    void parseDeleteActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteActionResponse)
    Q_DISABLE_COPY(DeleteActionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

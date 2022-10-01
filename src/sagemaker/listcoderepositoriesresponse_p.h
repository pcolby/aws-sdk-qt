// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREPOSITORIESRESPONSE_P_H
#define QTAWS_LISTCODEREPOSITORIESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListCodeRepositoriesResponse;

class ListCodeRepositoriesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListCodeRepositoriesResponsePrivate(ListCodeRepositoriesResponse * const q);

    void parseListCodeRepositoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCodeRepositoriesResponse)
    Q_DISABLE_COPY(ListCodeRepositoriesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

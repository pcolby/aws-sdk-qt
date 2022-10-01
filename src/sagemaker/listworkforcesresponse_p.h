// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFORCESRESPONSE_P_H
#define QTAWS_LISTWORKFORCESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListWorkforcesResponse;

class ListWorkforcesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListWorkforcesResponsePrivate(ListWorkforcesResponse * const q);

    void parseListWorkforcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkforcesResponse)
    Q_DISABLE_COPY(ListWorkforcesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

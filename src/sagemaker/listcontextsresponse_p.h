// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTEXTSRESPONSE_P_H
#define QTAWS_LISTCONTEXTSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListContextsResponse;

class ListContextsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListContextsResponsePrivate(ListContextsResponse * const q);

    void parseListContextsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContextsResponse)
    Q_DISABLE_COPY(ListContextsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

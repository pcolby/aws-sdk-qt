// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKTEAMSRESPONSE_P_H
#define QTAWS_LISTWORKTEAMSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListWorkteamsResponse;

class ListWorkteamsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListWorkteamsResponsePrivate(ListWorkteamsResponse * const q);

    void parseListWorkteamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkteamsResponse)
    Q_DISABLE_COPY(ListWorkteamsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

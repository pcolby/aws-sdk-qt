// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSRESPONSE_P_H
#define QTAWS_LISTEXPERIMENTSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListExperimentsResponse;

class ListExperimentsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListExperimentsResponsePrivate(ListExperimentsResponse * const q);

    void parseListExperimentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExperimentsResponse)
    Q_DISABLE_COPY(ListExperimentsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

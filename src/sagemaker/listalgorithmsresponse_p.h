// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALGORITHMSRESPONSE_P_H
#define QTAWS_LISTALGORITHMSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListAlgorithmsResponse;

class ListAlgorithmsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListAlgorithmsResponsePrivate(ListAlgorithmsResponse * const q);

    void parseListAlgorithmsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlgorithmsResponse)
    Q_DISABLE_COPY(ListAlgorithmsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

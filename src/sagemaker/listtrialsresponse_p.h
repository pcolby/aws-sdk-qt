// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALSRESPONSE_P_H
#define QTAWS_LISTTRIALSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListTrialsResponse;

class ListTrialsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListTrialsResponsePrivate(ListTrialsResponse * const q);

    void parseListTrialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrialsResponse)
    Q_DISABLE_COPY(ListTrialsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

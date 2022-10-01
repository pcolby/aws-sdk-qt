// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRECOMMENDERRESPONSE_P_H
#define QTAWS_STOPRECOMMENDERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class StopRecommenderResponse;

class StopRecommenderResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit StopRecommenderResponsePrivate(StopRecommenderResponse * const q);

    void parseStopRecommenderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopRecommenderResponse)
    Q_DISABLE_COPY(StopRecommenderResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

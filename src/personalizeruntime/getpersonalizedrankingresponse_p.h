// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONALIZEDRANKINGRESPONSE_P_H
#define QTAWS_GETPERSONALIZEDRANKINGRESPONSE_P_H

#include "personalizeruntimeresponse_p.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetPersonalizedRankingResponse;

class GetPersonalizedRankingResponsePrivate : public PersonalizeRuntimeResponsePrivate {

public:

    explicit GetPersonalizedRankingResponsePrivate(GetPersonalizedRankingResponse * const q);

    void parseGetPersonalizedRankingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPersonalizedRankingResponse)
    Q_DISABLE_COPY(GetPersonalizedRankingResponsePrivate)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif

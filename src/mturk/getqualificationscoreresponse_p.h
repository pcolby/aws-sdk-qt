// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONSCORERESPONSE_P_H
#define QTAWS_GETQUALIFICATIONSCORERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class GetQualificationScoreResponse;

class GetQualificationScoreResponsePrivate : public MTurkResponsePrivate {

public:

    explicit GetQualificationScoreResponsePrivate(GetQualificationScoreResponse * const q);

    void parseGetQualificationScoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQualificationScoreResponse)
    Q_DISABLE_COPY(GetQualificationScoreResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

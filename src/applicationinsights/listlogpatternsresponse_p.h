// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSRESPONSE_P_H
#define QTAWS_LISTLOGPATTERNSRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternsResponse;

class ListLogPatternsResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit ListLogPatternsResponsePrivate(ListLogPatternsResponse * const q);

    void parseListLogPatternsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLogPatternsResponse)
    Q_DISABLE_COPY(ListLogPatternsResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif

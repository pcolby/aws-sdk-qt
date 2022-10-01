// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROBLEMSRESPONSE_P_H
#define QTAWS_LISTPROBLEMSRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class ListProblemsResponse;

class ListProblemsResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit ListProblemsResponsePrivate(ListProblemsResponse * const q);

    void parseListProblemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProblemsResponse)
    Q_DISABLE_COPY(ListProblemsResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif

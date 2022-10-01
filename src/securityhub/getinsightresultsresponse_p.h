// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRESULTSRESPONSE_P_H
#define QTAWS_GETINSIGHTRESULTSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class GetInsightResultsResponse;

class GetInsightResultsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit GetInsightResultsResponsePrivate(GetInsightResultsResponse * const q);

    void parseGetInsightResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightResultsResponse)
    Q_DISABLE_COPY(GetInsightResultsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCESUMMARIESRESPONSE_P_H
#define QTAWS_LISTCOMPLIANCESUMMARIESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListComplianceSummariesResponse;

class ListComplianceSummariesResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListComplianceSummariesResponsePrivate(ListComplianceSummariesResponse * const q);

    void parseListComplianceSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComplianceSummariesResponse)
    Q_DISABLE_COPY(ListComplianceSummariesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

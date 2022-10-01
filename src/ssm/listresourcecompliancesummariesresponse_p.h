// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCECOMPLIANCESUMMARIESRESPONSE_P_H
#define QTAWS_LISTRESOURCECOMPLIANCESUMMARIESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListResourceComplianceSummariesResponse;

class ListResourceComplianceSummariesResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListResourceComplianceSummariesResponsePrivate(ListResourceComplianceSummariesResponse * const q);

    void parseListResourceComplianceSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceComplianceSummariesResponse)
    Q_DISABLE_COPY(ListResourceComplianceSummariesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

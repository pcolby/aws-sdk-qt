// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALIESFORINSIGHTRESPONSE_P_H
#define QTAWS_LISTANOMALIESFORINSIGHTRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomaliesForInsightResponse;

class ListAnomaliesForInsightResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListAnomaliesForInsightResponsePrivate(ListAnomaliesForInsightResponse * const q);

    void parseListAnomaliesForInsightResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnomaliesForInsightResponse)
    Q_DISABLE_COPY(ListAnomaliesForInsightResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

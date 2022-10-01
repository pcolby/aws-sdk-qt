// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALIESRESPONSE_P_H
#define QTAWS_GETANOMALIESRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomaliesResponse;

class GetAnomaliesResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetAnomaliesResponsePrivate(GetAnomaliesResponse * const q);

    void parseGetAnomaliesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnomaliesResponse)
    Q_DISABLE_COPY(GetAnomaliesResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

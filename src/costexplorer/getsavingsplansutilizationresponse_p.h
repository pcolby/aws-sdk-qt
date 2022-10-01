// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONRESPONSE_P_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationResponse;

class GetSavingsPlansUtilizationResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetSavingsPlansUtilizationResponsePrivate(GetSavingsPlansUtilizationResponse * const q);

    void parseGetSavingsPlansUtilizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansUtilizationResponse)
    Q_DISABLE_COPY(GetSavingsPlansUtilizationResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

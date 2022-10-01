// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSRESPONSE_P_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationDetailsResponse;

class GetSavingsPlansUtilizationDetailsResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetSavingsPlansUtilizationDetailsResponsePrivate(GetSavingsPlansUtilizationDetailsResponse * const q);

    void parseGetSavingsPlansUtilizationDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansUtilizationDetailsResponse)
    Q_DISABLE_COPY(GetSavingsPlansUtilizationDetailsResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

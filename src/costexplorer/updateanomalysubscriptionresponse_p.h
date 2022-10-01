// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEANOMALYSUBSCRIPTIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalySubscriptionResponse;

class UpdateAnomalySubscriptionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit UpdateAnomalySubscriptionResponsePrivate(UpdateAnomalySubscriptionResponse * const q);

    void parseUpdateAnomalySubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAnomalySubscriptionResponse)
    Q_DISABLE_COPY(UpdateAnomalySubscriptionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

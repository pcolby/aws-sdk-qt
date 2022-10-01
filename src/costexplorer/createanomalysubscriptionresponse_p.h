// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATEANOMALYSUBSCRIPTIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalySubscriptionResponse;

class CreateAnomalySubscriptionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit CreateAnomalySubscriptionResponsePrivate(CreateAnomalySubscriptionResponse * const q);

    void parseCreateAnomalySubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAnomalySubscriptionResponse)
    Q_DISABLE_COPY(CreateAnomalySubscriptionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETEANOMALYSUBSCRIPTIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalySubscriptionResponse;

class DeleteAnomalySubscriptionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit DeleteAnomalySubscriptionResponsePrivate(DeleteAnomalySubscriptionResponse * const q);

    void parseDeleteAnomalySubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalySubscriptionResponse)
    Q_DISABLE_COPY(DeleteAnomalySubscriptionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

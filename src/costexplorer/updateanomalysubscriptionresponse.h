// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYSUBSCRIPTIONRESPONSE_H
#define QTAWS_UPDATEANOMALYSUBSCRIPTIONRESPONSE_H

#include "costexplorerresponse.h"
#include "updateanomalysubscriptionrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalySubscriptionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateAnomalySubscriptionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    UpdateAnomalySubscriptionResponse(const UpdateAnomalySubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAnomalySubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnomalySubscriptionResponse)
    Q_DISABLE_COPY(UpdateAnomalySubscriptionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATEANOMALYSUBSCRIPTIONRESPONSE_H

#include "costexplorerresponse.h"
#include "createanomalysubscriptionrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalySubscriptionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT CreateAnomalySubscriptionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    CreateAnomalySubscriptionResponse(const CreateAnomalySubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAnomalySubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnomalySubscriptionResponse)
    Q_DISABLE_COPY(CreateAnomalySubscriptionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

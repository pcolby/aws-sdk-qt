// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETEANOMALYSUBSCRIPTIONRESPONSE_H

#include "costexplorerresponse.h"
#include "deleteanomalysubscriptionrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalySubscriptionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT DeleteAnomalySubscriptionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    DeleteAnomalySubscriptionResponse(const DeleteAnomalySubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAnomalySubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnomalySubscriptionResponse)
    Q_DISABLE_COPY(DeleteAnomalySubscriptionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDSAVINGSPLANRESPONSE_H
#define QTAWS_DELETEQUEUEDSAVINGSPLANRESPONSE_H

#include "savingsplansresponse.h"
#include "deletequeuedsavingsplanrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DeleteQueuedSavingsPlanResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT DeleteQueuedSavingsPlanResponse : public SavingsPlansResponse {
    Q_OBJECT

public:
    DeleteQueuedSavingsPlanResponse(const DeleteQueuedSavingsPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQueuedSavingsPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueuedSavingsPlanResponse)
    Q_DISABLE_COPY(DeleteQueuedSavingsPlanResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

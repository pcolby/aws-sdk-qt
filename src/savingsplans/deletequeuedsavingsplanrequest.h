// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDSAVINGSPLANREQUEST_H
#define QTAWS_DELETEQUEUEDSAVINGSPLANREQUEST_H

#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DeleteQueuedSavingsPlanRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT DeleteQueuedSavingsPlanRequest : public SavingsPlansRequest {

public:
    DeleteQueuedSavingsPlanRequest(const DeleteQueuedSavingsPlanRequest &other);
    DeleteQueuedSavingsPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueuedSavingsPlanRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

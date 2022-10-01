// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAVINGSPLANRESPONSE_H
#define QTAWS_CREATESAVINGSPLANRESPONSE_H

#include "savingsplansresponse.h"
#include "createsavingsplanrequest.h"

namespace QtAws {
namespace SavingsPlans {

class CreateSavingsPlanResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT CreateSavingsPlanResponse : public SavingsPlansResponse {
    Q_OBJECT

public:
    CreateSavingsPlanResponse(const CreateSavingsPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSavingsPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSavingsPlanResponse)
    Q_DISABLE_COPY(CreateSavingsPlanResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

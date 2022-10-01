// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAVINGSPLANRESPONSE_P_H
#define QTAWS_CREATESAVINGSPLANRESPONSE_P_H

#include "savingsplansresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class CreateSavingsPlanResponse;

class CreateSavingsPlanResponsePrivate : public SavingsPlansResponsePrivate {

public:

    explicit CreateSavingsPlanResponsePrivate(CreateSavingsPlanResponse * const q);

    void parseCreateSavingsPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSavingsPlanResponse)
    Q_DISABLE_COPY(CreateSavingsPlanResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

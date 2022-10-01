// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDSAVINGSPLANRESPONSE_P_H
#define QTAWS_DELETEQUEUEDSAVINGSPLANRESPONSE_P_H

#include "savingsplansresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class DeleteQueuedSavingsPlanResponse;

class DeleteQueuedSavingsPlanResponsePrivate : public SavingsPlansResponsePrivate {

public:

    explicit DeleteQueuedSavingsPlanResponsePrivate(DeleteQueuedSavingsPlanResponse * const q);

    void parseDeleteQueuedSavingsPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueuedSavingsPlanResponse)
    Q_DISABLE_COPY(DeleteQueuedSavingsPlanResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

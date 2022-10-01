// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYPLANNINGREQUEST_P_H
#define QTAWS_STARTQUERYPLANNINGREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "startqueryplanningrequest.h"

namespace QtAws {
namespace LakeFormation {

class StartQueryPlanningRequest;

class StartQueryPlanningRequestPrivate : public LakeFormationRequestPrivate {

public:
    StartQueryPlanningRequestPrivate(const LakeFormationRequest::Action action,
                                   StartQueryPlanningRequest * const q);
    StartQueryPlanningRequestPrivate(const StartQueryPlanningRequestPrivate &other,
                                   StartQueryPlanningRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartQueryPlanningRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

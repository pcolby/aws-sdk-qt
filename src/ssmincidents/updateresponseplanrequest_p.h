// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEPLANREQUEST_P_H
#define QTAWS_UPDATERESPONSEPLANREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "updateresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateResponsePlanRequest;

class UpdateResponsePlanRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    UpdateResponsePlanRequestPrivate(const SsmIncidentsRequest::Action action,
                                   UpdateResponsePlanRequest * const q);
    UpdateResponsePlanRequestPrivate(const UpdateResponsePlanRequestPrivate &other,
                                   UpdateResponsePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResponsePlanRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

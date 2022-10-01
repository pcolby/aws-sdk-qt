// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEPLANREQUEST_P_H
#define QTAWS_CREATERESPONSEPLANREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "createresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateResponsePlanRequest;

class CreateResponsePlanRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    CreateResponsePlanRequestPrivate(const SsmIncidentsRequest::Action action,
                                   CreateResponsePlanRequest * const q);
    CreateResponsePlanRequestPrivate(const CreateResponsePlanRequestPrivate &other,
                                   CreateResponsePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResponsePlanRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

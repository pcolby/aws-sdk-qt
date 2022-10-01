// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEPLANREQUEST_P_H
#define QTAWS_GETRESPONSEPLANREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "getresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetResponsePlanRequest;

class GetResponsePlanRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    GetResponsePlanRequestPrivate(const SsmIncidentsRequest::Action action,
                                   GetResponsePlanRequest * const q);
    GetResponsePlanRequestPrivate(const GetResponsePlanRequestPrivate &other,
                                   GetResponsePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResponsePlanRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

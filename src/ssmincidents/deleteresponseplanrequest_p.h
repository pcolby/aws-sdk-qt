// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEPLANREQUEST_P_H
#define QTAWS_DELETERESPONSEPLANREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "deleteresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteResponsePlanRequest;

class DeleteResponsePlanRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    DeleteResponsePlanRequestPrivate(const SsmIncidentsRequest::Action action,
                                   DeleteResponsePlanRequest * const q);
    DeleteResponsePlanRequestPrivate(const DeleteResponsePlanRequestPrivate &other,
                                   DeleteResponsePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResponsePlanRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

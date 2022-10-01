// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINCIDENTREQUEST_P_H
#define QTAWS_STARTINCIDENTREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "startincidentrequest.h"

namespace QtAws {
namespace SsmIncidents {

class StartIncidentRequest;

class StartIncidentRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    StartIncidentRequestPrivate(const SsmIncidentsRequest::Action action,
                                   StartIncidentRequest * const q);
    StartIncidentRequestPrivate(const StartIncidentRequestPrivate &other,
                                   StartIncidentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartIncidentRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

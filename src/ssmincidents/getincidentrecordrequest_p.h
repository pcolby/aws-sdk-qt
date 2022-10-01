// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINCIDENTRECORDREQUEST_P_H
#define QTAWS_GETINCIDENTRECORDREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "getincidentrecordrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetIncidentRecordRequest;

class GetIncidentRecordRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    GetIncidentRecordRequestPrivate(const SsmIncidentsRequest::Action action,
                                   GetIncidentRecordRequest * const q);
    GetIncidentRecordRequestPrivate(const GetIncidentRecordRequestPrivate &other,
                                   GetIncidentRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIncidentRecordRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

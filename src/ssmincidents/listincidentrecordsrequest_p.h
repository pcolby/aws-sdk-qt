// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCIDENTRECORDSREQUEST_P_H
#define QTAWS_LISTINCIDENTRECORDSREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "listincidentrecordsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListIncidentRecordsRequest;

class ListIncidentRecordsRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    ListIncidentRecordsRequestPrivate(const SsmIncidentsRequest::Action action,
                                   ListIncidentRecordsRequest * const q);
    ListIncidentRecordsRequestPrivate(const ListIncidentRecordsRequestPrivate &other,
                                   ListIncidentRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIncidentRecordsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

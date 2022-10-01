// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINCIDENTRECORDREQUEST_P_H
#define QTAWS_UPDATEINCIDENTRECORDREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "updateincidentrecordrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateIncidentRecordRequest;

class UpdateIncidentRecordRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    UpdateIncidentRecordRequestPrivate(const SsmIncidentsRequest::Action action,
                                   UpdateIncidentRecordRequest * const q);
    UpdateIncidentRecordRequestPrivate(const UpdateIncidentRecordRequestPrivate &other,
                                   UpdateIncidentRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIncidentRecordRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

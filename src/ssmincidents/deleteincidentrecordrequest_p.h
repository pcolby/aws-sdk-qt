// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINCIDENTRECORDREQUEST_P_H
#define QTAWS_DELETEINCIDENTRECORDREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "deleteincidentrecordrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteIncidentRecordRequest;

class DeleteIncidentRecordRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    DeleteIncidentRecordRequestPrivate(const SsmIncidentsRequest::Action action,
                                   DeleteIncidentRecordRequest * const q);
    DeleteIncidentRecordRequestPrivate(const DeleteIncidentRecordRequestPrivate &other,
                                   DeleteIncidentRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIncidentRecordRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONSETREQUEST_P_H
#define QTAWS_UPDATEREPLICATIONSETREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "updatereplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateReplicationSetRequest;

class UpdateReplicationSetRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    UpdateReplicationSetRequestPrivate(const SsmIncidentsRequest::Action action,
                                   UpdateReplicationSetRequest * const q);
    UpdateReplicationSetRequestPrivate(const UpdateReplicationSetRequestPrivate &other,
                                   UpdateReplicationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

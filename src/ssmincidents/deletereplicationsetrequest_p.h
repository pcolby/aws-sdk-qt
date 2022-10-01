// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSETREQUEST_P_H
#define QTAWS_DELETEREPLICATIONSETREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "deletereplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteReplicationSetRequest;

class DeleteReplicationSetRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    DeleteReplicationSetRequestPrivate(const SsmIncidentsRequest::Action action,
                                   DeleteReplicationSetRequest * const q);
    DeleteReplicationSetRequestPrivate(const DeleteReplicationSetRequestPrivate &other,
                                   DeleteReplicationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

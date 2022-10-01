// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONSETREQUEST_P_H
#define QTAWS_GETREPLICATIONSETREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "getreplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetReplicationSetRequest;

class GetReplicationSetRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    GetReplicationSetRequestPrivate(const SsmIncidentsRequest::Action action,
                                   GetReplicationSetRequest * const q);
    GetReplicationSetRequestPrivate(const GetReplicationSetRequestPrivate &other,
                                   GetReplicationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

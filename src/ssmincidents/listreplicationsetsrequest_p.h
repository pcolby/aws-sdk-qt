// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLICATIONSETSREQUEST_P_H
#define QTAWS_LISTREPLICATIONSETSREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "listreplicationsetsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListReplicationSetsRequest;

class ListReplicationSetsRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    ListReplicationSetsRequestPrivate(const SsmIncidentsRequest::Action action,
                                   ListReplicationSetsRequest * const q);
    ListReplicationSetsRequestPrivate(const ListReplicationSetsRequestPrivate &other,
                                   ListReplicationSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReplicationSetsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

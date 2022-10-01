// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSETREQUEST_P_H
#define QTAWS_CREATEREPLICATIONSETREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "createreplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateReplicationSetRequest;

class CreateReplicationSetRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    CreateReplicationSetRequestPrivate(const SsmIncidentsRequest::Action action,
                                   CreateReplicationSetRequest * const q);
    CreateReplicationSetRequestPrivate(const CreateReplicationSetRequestPrivate &other,
                                   CreateReplicationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCESERVERREPLICATIONTYPEREQUEST_P_H
#define QTAWS_UPDATESOURCESERVERREPLICATIONTYPEREQUEST_P_H

#include "mgnrequest_p.h"
#include "updatesourceserverreplicationtyperequest.h"

namespace QtAws {
namespace Mgn {

class UpdateSourceServerReplicationTypeRequest;

class UpdateSourceServerReplicationTypeRequestPrivate : public MgnRequestPrivate {

public:
    UpdateSourceServerReplicationTypeRequestPrivate(const MgnRequest::Action action,
                                   UpdateSourceServerReplicationTypeRequest * const q);
    UpdateSourceServerReplicationTypeRequestPrivate(const UpdateSourceServerReplicationTypeRequestPrivate &other,
                                   UpdateSourceServerReplicationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSourceServerReplicationTypeRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

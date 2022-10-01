// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONREQUEST_P_H

#include "drsrequest_p.h"
#include "getfailbackreplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class GetFailbackReplicationConfigurationRequest;

class GetFailbackReplicationConfigurationRequestPrivate : public DrsRequestPrivate {

public:
    GetFailbackReplicationConfigurationRequestPrivate(const DrsRequest::Action action,
                                   GetFailbackReplicationConfigurationRequest * const q);
    GetFailbackReplicationConfigurationRequestPrivate(const GetFailbackReplicationConfigurationRequestPrivate &other,
                                   GetFailbackReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFailbackReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

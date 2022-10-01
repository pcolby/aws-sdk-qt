// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_P_H

#include "mgnrequest_p.h"
#include "getreplicationconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class GetReplicationConfigurationRequest;

class GetReplicationConfigurationRequestPrivate : public MgnRequestPrivate {

public:
    GetReplicationConfigurationRequestPrivate(const MgnRequest::Action action,
                                   GetReplicationConfigurationRequest * const q);
    GetReplicationConfigurationRequestPrivate(const GetReplicationConfigurationRequestPrivate &other,
                                   GetReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

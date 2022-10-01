// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_P_H

#include "drsrequest_p.h"
#include "getreplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class GetReplicationConfigurationRequest;

class GetReplicationConfigurationRequestPrivate : public DrsRequestPrivate {

public:
    GetReplicationConfigurationRequestPrivate(const DrsRequest::Action action,
                                   GetReplicationConfigurationRequest * const q);
    GetReplicationConfigurationRequestPrivate(const GetReplicationConfigurationRequestPrivate &other,
                                   GetReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

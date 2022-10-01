// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTREPLICATIONCONFIGURATIONREQUEST_P_H

#include "ecrrequest_p.h"
#include "putreplicationconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class PutReplicationConfigurationRequest;

class PutReplicationConfigurationRequestPrivate : public EcrRequestPrivate {

public:
    PutReplicationConfigurationRequestPrivate(const EcrRequest::Action action,
                                   PutReplicationConfigurationRequest * const q);
    PutReplicationConfigurationRequestPrivate(const PutReplicationConfigurationRequestPrivate &other,
                                   PutReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutReplicationConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEREQUEST_P_H
#define QTAWS_UPDATEINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updateinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateInstanceRequest;

class UpdateInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateInstanceRequest * const q);
    UpdateInstanceRequestPrivate(const UpdateInstanceRequestPrivate &other,
                                   UpdateInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

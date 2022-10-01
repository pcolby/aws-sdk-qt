// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERDSDBINSTANCEREQUEST_P_H
#define QTAWS_UPDATERDSDBINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updaterdsdbinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateRdsDbInstanceRequest;

class UpdateRdsDbInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateRdsDbInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateRdsDbInstanceRequest * const q);
    UpdateRdsDbInstanceRequestPrivate(const UpdateRdsDbInstanceRequestPrivate &other,
                                   UpdateRdsDbInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRdsDbInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

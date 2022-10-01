// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINSTANCEREQUEST_P_H
#define QTAWS_UPDATESERVICEINSTANCEREQUEST_P_H

#include "protonrequest_p.h"
#include "updateserviceinstancerequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceInstanceRequest;

class UpdateServiceInstanceRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateServiceInstanceRequestPrivate(const ProtonRequest::Action action,
                                   UpdateServiceInstanceRequest * const q);
    UpdateServiceInstanceRequestPrivate(const UpdateServiceInstanceRequestPrivate &other,
                                   UpdateServiceInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceInstanceRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

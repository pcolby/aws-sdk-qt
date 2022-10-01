// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEALIASREQUEST_P_H
#define QTAWS_UPDATEROLEALIASREQUEST_P_H

#include "iotrequest_p.h"
#include "updaterolealiasrequest.h"

namespace QtAws {
namespace IoT {

class UpdateRoleAliasRequest;

class UpdateRoleAliasRequestPrivate : public IoTRequestPrivate {

public:
    UpdateRoleAliasRequestPrivate(const IoTRequest::Action action,
                                   UpdateRoleAliasRequest * const q);
    UpdateRoleAliasRequestPrivate(const UpdateRoleAliasRequestPrivate &other,
                                   UpdateRoleAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoleAliasRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

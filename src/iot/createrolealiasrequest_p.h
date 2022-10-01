// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLEALIASREQUEST_P_H
#define QTAWS_CREATEROLEALIASREQUEST_P_H

#include "iotrequest_p.h"
#include "createrolealiasrequest.h"

namespace QtAws {
namespace IoT {

class CreateRoleAliasRequest;

class CreateRoleAliasRequestPrivate : public IoTRequestPrivate {

public:
    CreateRoleAliasRequestPrivate(const IoTRequest::Action action,
                                   CreateRoleAliasRequest * const q);
    CreateRoleAliasRequestPrivate(const CreateRoleAliasRequestPrivate &other,
                                   CreateRoleAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoleAliasRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

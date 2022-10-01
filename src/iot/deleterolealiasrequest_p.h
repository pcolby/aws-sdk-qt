// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEALIASREQUEST_P_H
#define QTAWS_DELETEROLEALIASREQUEST_P_H

#include "iotrequest_p.h"
#include "deleterolealiasrequest.h"

namespace QtAws {
namespace IoT {

class DeleteRoleAliasRequest;

class DeleteRoleAliasRequestPrivate : public IoTRequestPrivate {

public:
    DeleteRoleAliasRequestPrivate(const IoTRequest::Action action,
                                   DeleteRoleAliasRequest * const q);
    DeleteRoleAliasRequestPrivate(const DeleteRoleAliasRequestPrivate &other,
                                   DeleteRoleAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoleAliasRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

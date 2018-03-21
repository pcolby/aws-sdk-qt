/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEROLEALIASREQUEST_P_H
#define QTAWS_DELETEROLEALIASREQUEST_P_H

#include "iot_p.h"
#include "deleterolealiasrequest.h"

namespace AWS {

namespace IoT {

class DeleteRoleAliasRequest;

class QTAWS_EXPORT DeleteRoleAliasRequestPrivate : public IoTPrivate {

public:
    DeleteRoleAliasRequestPrivate(const IoT::Action action,
                                   DeleteRoleAliasRequest * const q);
    DeleteRoleAliasRequestPrivate(const DeleteRoleAliasRequestPrivate &other,
                                   DeleteRoleAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoleAliasRequest)

};

} // namespace IoT
} // namespace AWS

#endif

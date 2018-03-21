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

#ifndef QTAWS_DELETEVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_DELETEVAULTNOTIFICATIONSREQUEST_P_H

#include "glacier_p.h"
#include "deletevaultnotificationsrequest.h"

namespace AWS {

namespace Glacier {

class DeleteVaultNotificationsRequest;

class QTAWS_EXPORT DeleteVaultNotificationsRequestPrivate : public GlacierPrivate {

public:
    DeleteVaultNotificationsRequestPrivate(const Glacier::Action action,
                                   DeleteVaultNotificationsRequest * const q);
    DeleteVaultNotificationsRequestPrivate(const DeleteVaultNotificationsRequestPrivate &other,
                                   DeleteVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVaultNotificationsRequest)

};

} // namespace Glacier
} // namespace AWS

#endif

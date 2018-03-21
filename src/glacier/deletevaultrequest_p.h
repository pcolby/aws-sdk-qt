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

#ifndef QTAWS_DELETEVAULTREQUEST_P_H
#define QTAWS_DELETEVAULTREQUEST_P_H

#include "glacier_p.h"
#include "deletevaultrequest.h"

namespace AWS {

namespace Glacier {

class DeleteVaultRequest;

class QTAWS_EXPORT DeleteVaultRequestPrivate : public GlacierPrivate {

public:
    DeleteVaultRequestPrivate(const Glacier::Action action,
                                   DeleteVaultRequest * const q);
    DeleteVaultRequestPrivate(const DeleteVaultRequestPrivate &other,
                                   DeleteVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVaultRequest)

};

} // namespace Glacier
} // namespace AWS

#endif

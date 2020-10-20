/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEACCOUNTSETTINGREQUEST_P_H
#define QTAWS_DELETEACCOUNTSETTINGREQUEST_P_H

#include "ecsrequest_p.h"
#include "deleteaccountsettingrequest.h"

namespace QtAws {
namespace ECS {

class DeleteAccountSettingRequest;

class QTAWS_EXPORT DeleteAccountSettingRequestPrivate : public EcsRequestPrivate {

public:
    DeleteAccountSettingRequestPrivate(const EcsRequest::Action action,
                                   DeleteAccountSettingRequest * const q);
    DeleteAccountSettingRequestPrivate(const DeleteAccountSettingRequestPrivate &other,
                                   DeleteAccountSettingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountSettingRequest)

};

} // namespace ECS
} // namespace QtAws

#endif

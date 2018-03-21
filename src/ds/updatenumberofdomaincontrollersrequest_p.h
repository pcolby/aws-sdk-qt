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

#ifndef QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSREQUEST_P_H
#define QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSREQUEST_P_H

#include "directoryservice_p.h"
#include "updatenumberofdomaincontrollersrequest.h"

namespace AWS {

namespace DirectoryService {

class UpdateNumberOfDomainControllersRequest;

class QTAWS_EXPORT UpdateNumberOfDomainControllersRequestPrivate : public DirectoryServicePrivate {

public:
    UpdateNumberOfDomainControllersRequestPrivate(const DirectoryService::Action action,
                                   UpdateNumberOfDomainControllersRequest * const q);
    UpdateNumberOfDomainControllersRequestPrivate(const UpdateNumberOfDomainControllersRequestPrivate &other,
                                   UpdateNumberOfDomainControllersRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNumberOfDomainControllersRequest)

};

} // namespace DirectoryService
} // namespace AWS

#endif

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

#ifndef QTAWS_CREATECONDITIONALFORWARDERREQUEST_P_H
#define QTAWS_CREATECONDITIONALFORWARDERREQUEST_P_H

#include "directoryservice_p.h"
#include "createconditionalforwarderrequest.h"

namespace AWS {

namespace DirectoryService {

class CreateConditionalForwarderRequest;

class QTAWS_EXPORT CreateConditionalForwarderRequestPrivate : public DirectoryServicePrivate {

public:
    CreateConditionalForwarderRequestPrivate(const DirectoryService::Action action,
                                   CreateConditionalForwarderRequest * const q);
    CreateConditionalForwarderRequestPrivate(const CreateConditionalForwarderRequestPrivate &other,
                                   CreateConditionalForwarderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace AWS

#endif

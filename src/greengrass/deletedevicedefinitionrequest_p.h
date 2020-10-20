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

#ifndef QTAWS_DELETEDEVICEDEFINITIONREQUEST_P_H
#define QTAWS_DELETEDEVICEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deletedevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteDeviceDefinitionRequest;

class QTAWS_EXPORT DeleteDeviceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteDeviceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteDeviceDefinitionRequest * const q);
    DeleteDeviceDefinitionRequestPrivate(const DeleteDeviceDefinitionRequestPrivate &other,
                                   DeleteDeviceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_DELETELOGGERDEFINITIONREQUEST_P_H
#define QTAWS_DELETELOGGERDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deleteloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteLoggerDefinitionRequest;

class QTAWS_EXPORT DeleteLoggerDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteLoggerDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteLoggerDefinitionRequest * const q);
    DeleteLoggerDefinitionRequestPrivate(const DeleteLoggerDefinitionRequestPrivate &other,
                                   DeleteLoggerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

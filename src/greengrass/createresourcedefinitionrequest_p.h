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

#ifndef QTAWS_CREATERESOURCEDEFINITIONREQUEST_P_H
#define QTAWS_CREATERESOURCEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionRequest;

class QTAWS_EXPORT CreateResourceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateResourceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateResourceDefinitionRequest * const q);
    CreateResourceDefinitionRequestPrivate(const CreateResourceDefinitionRequestPrivate &other,
                                   CreateResourceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

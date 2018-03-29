/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTCOREDEFINITIONSREQUEST_P_H
#define QTAWS_LISTCOREDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listcoredefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListCoreDefinitionsRequest;

class QTAWS_EXPORT ListCoreDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListCoreDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListCoreDefinitionsRequest * const q);
    ListCoreDefinitionsRequestPrivate(const ListCoreDefinitionsRequestPrivate &other,
                                   ListCoreDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoreDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

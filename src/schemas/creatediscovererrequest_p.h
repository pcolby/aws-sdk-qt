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

#ifndef QTAWS_CREATEDISCOVERERREQUEST_P_H
#define QTAWS_CREATEDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "creatediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class CreateDiscovererRequest;

class QTAWS_EXPORT CreateDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    CreateDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   CreateDiscovererRequest * const q);
    CreateDiscovererRequestPrivate(const CreateDiscovererRequestPrivate &other,
                                   CreateDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif

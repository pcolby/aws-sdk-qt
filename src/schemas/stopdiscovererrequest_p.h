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

#ifndef QTAWS_STOPDISCOVERERREQUEST_P_H
#define QTAWS_STOPDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "stopdiscovererrequest.h"

namespace QtAws {
namespace Schemas {

class StopDiscovererRequest;

class StopDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    StopDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   StopDiscovererRequest * const q);
    StopDiscovererRequestPrivate(const StopDiscovererRequestPrivate &other,
                                   StopDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif

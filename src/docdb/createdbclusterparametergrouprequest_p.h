/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CREATEDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "createdbclusterparametergrouprequest.h"

namespace QtAws {
namespace DocDB {

class CreateDBClusterParameterGroupRequest;

class QTAWS_EXPORT CreateDBClusterParameterGroupRequestPrivate : public DocDBRequestPrivate {

public:
    CreateDBClusterParameterGroupRequestPrivate(const DocDBRequest::Action action,
                                   CreateDBClusterParameterGroupRequest * const q);
    CreateDBClusterParameterGroupRequestPrivate(const CreateDBClusterParameterGroupRequestPrivate &other,
                                   CreateDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterParameterGroupRequest)

};

} // namespace DocDB
} // namespace QtAws

#endif

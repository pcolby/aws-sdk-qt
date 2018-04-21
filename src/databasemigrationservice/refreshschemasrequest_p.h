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

#ifndef QTAWS_REFRESHSCHEMASREQUEST_P_H
#define QTAWS_REFRESHSCHEMASREQUEST_P_H

#include "databasemigrationservicerequest_p.h"
#include "refreshschemasrequest.h"

namespace QtAws {
namespace DatabaseMigrationService {

class RefreshSchemasRequest;

class QTAWS_EXPORT RefreshSchemasRequestPrivate : public DatabaseMigrationServiceRequestPrivate {

public:
    RefreshSchemasRequestPrivate(const DatabaseMigrationServiceRequest::Action action,
                                   RefreshSchemasRequest * const q);
    RefreshSchemasRequestPrivate(const RefreshSchemasRequestPrivate &other,
                                   RefreshSchemasRequest * const q);

private:
    Q_DECLARE_PUBLIC(RefreshSchemasRequest)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif

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

#ifndef QTAWS_BATCHIMPORTFINDINGSREQUEST_P_H
#define QTAWS_BATCHIMPORTFINDINGSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "batchimportfindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchImportFindingsRequest;

class BatchImportFindingsRequestPrivate : public SecurityHubRequestPrivate {

public:
    BatchImportFindingsRequestPrivate(const SecurityHubRequest::Action action,
                                   BatchImportFindingsRequest * const q);
    BatchImportFindingsRequestPrivate(const BatchImportFindingsRequestPrivate &other,
                                   BatchImportFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchImportFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

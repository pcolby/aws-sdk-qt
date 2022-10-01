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

#ifndef QTAWS_QUERYLINEAGEREQUEST_P_H
#define QTAWS_QUERYLINEAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "querylineagerequest.h"

namespace QtAws {
namespace SageMaker {

class QueryLineageRequest;

class QueryLineageRequestPrivate : public SageMakerRequestPrivate {

public:
    QueryLineageRequestPrivate(const SageMakerRequest::Action action,
                                   QueryLineageRequest * const q);
    QueryLineageRequestPrivate(const QueryLineageRequestPrivate &other,
                                   QueryLineageRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryLineageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

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

#ifndef QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSREQUEST_P_H
#define QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSREQUEST_P_H

#include "elasticsearchservicerequest_p.h"
#include "getcompatibleelasticsearchversionsrequest.h"

namespace QtAws {
namespace ElasticsearchService {

class GetCompatibleElasticsearchVersionsRequest;

class QTAWS_EXPORT GetCompatibleElasticsearchVersionsRequestPrivate : public ElasticsearchServiceRequestPrivate {

public:
    GetCompatibleElasticsearchVersionsRequestPrivate(const ElasticsearchServiceRequest::Action action,
                                   GetCompatibleElasticsearchVersionsRequest * const q);
    GetCompatibleElasticsearchVersionsRequestPrivate(const GetCompatibleElasticsearchVersionsRequestPrivate &other,
                                   GetCompatibleElasticsearchVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCompatibleElasticsearchVersionsRequest)

};

} // namespace ElasticsearchService
} // namespace QtAws

#endif

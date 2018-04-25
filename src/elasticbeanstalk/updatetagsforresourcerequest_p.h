/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_UPDATETAGSFORRESOURCEREQUEST_P_H
#define QTAWS_UPDATETAGSFORRESOURCEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "updatetagsforresourcerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateTagsForResourceRequest;

class QTAWS_EXPORT UpdateTagsForResourceRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    UpdateTagsForResourceRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   UpdateTagsForResourceRequest * const q);
    UpdateTagsForResourceRequestPrivate(const UpdateTagsForResourceRequestPrivate &other,
                                   UpdateTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTagsForResourceRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

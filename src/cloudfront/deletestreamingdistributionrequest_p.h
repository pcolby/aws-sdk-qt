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

#ifndef QTAWS_DELETESTREAMINGDISTRIBUTIONREQUEST_P_H
#define QTAWS_DELETESTREAMINGDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletestreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteStreamingDistributionRequest;

class QTAWS_EXPORT DeleteStreamingDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteStreamingDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteStreamingDistributionRequest * const q);
    DeleteStreamingDistributionRequestPrivate(const DeleteStreamingDistributionRequestPrivate &other,
                                   DeleteStreamingDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

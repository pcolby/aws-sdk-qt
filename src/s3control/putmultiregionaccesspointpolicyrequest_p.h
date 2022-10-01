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

#ifndef QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYREQUEST_P_H
#define QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putmultiregionaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class PutMultiRegionAccessPointPolicyRequest;

class PutMultiRegionAccessPointPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    PutMultiRegionAccessPointPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   PutMultiRegionAccessPointPolicyRequest * const q);
    PutMultiRegionAccessPointPolicyRequestPrivate(const PutMultiRegionAccessPointPolicyRequestPrivate &other,
                                   PutMultiRegionAccessPointPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMultiRegionAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

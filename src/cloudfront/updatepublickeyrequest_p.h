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

#ifndef QTAWS_UPDATEPUBLICKEYREQUEST_P_H
#define QTAWS_UPDATEPUBLICKEYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatepublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdatePublicKeyRequest;

class QTAWS_EXPORT UpdatePublicKeyRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdatePublicKeyRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdatePublicKeyRequest * const q);
    UpdatePublicKeyRequestPrivate(const UpdatePublicKeyRequestPrivate &other,
                                   UpdatePublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

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

#ifndef QTAWS_INITIATEMULTIPARTUPLOADREQUEST_P_H
#define QTAWS_INITIATEMULTIPARTUPLOADREQUEST_P_H

#include "glacierrequest_p.h"
#include "initiatemultipartuploadrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateMultipartUploadRequest;

class QTAWS_EXPORT InitiateMultipartUploadRequestPrivate : public GlacierRequestPrivate {

public:
    InitiateMultipartUploadRequestPrivate(const GlacierRequest::Action action,
                                   InitiateMultipartUploadRequest * const q);
    InitiateMultipartUploadRequestPrivate(const InitiateMultipartUploadRequestPrivate &other,
                                   InitiateMultipartUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateMultipartUploadRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif

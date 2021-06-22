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

#ifndef QTAWS_PUTIMAGEREQUEST_P_H
#define QTAWS_PUTIMAGEREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "putimagerequest.h"

namespace QtAws {
namespace ECRPublic {

class PutImageRequest;

class PutImageRequestPrivate : public ECRPublicRequestPrivate {

public:
    PutImageRequestPrivate(const ECRPublicRequest::Action action,
                                   PutImageRequest * const q);
    PutImageRequestPrivate(const PutImageRequestPrivate &other,
                                   PutImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutImageRequest)

};

} // namespace ECRPublic
} // namespace QtAws

#endif

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

#ifndef QTAWS_COPYIMAGEREQUEST_P_H
#define QTAWS_COPYIMAGEREQUEST_P_H

#include "ec2_p.h"
#include "copyimagerequest.h"

namespace QtAws {
namespace EC2 {

class CopyImageRequest;

class QTAWS_EXPORT CopyImageRequestPrivate : public EC2Private {

public:
    CopyImageRequestPrivate(const EC2::Action action,
                                   CopyImageRequest * const q);
    CopyImageRequestPrivate(const CopyImageRequestPrivate &other,
                                   CopyImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyImageRequest)

};

} // namespace EC2
} // namespace QtAws

#endif

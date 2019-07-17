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

#ifndef QTAWS_PUTOBJECTLOCKCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTOBJECTLOCKCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putobjectlockconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectLockConfigurationRequest;

class QTAWS_EXPORT PutObjectLockConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutObjectLockConfigurationRequestPrivate(const S3Request::Action action,
                                   PutObjectLockConfigurationRequest * const q);
    PutObjectLockConfigurationRequestPrivate(const PutObjectLockConfigurationRequestPrivate &other,
                                   PutObjectLockConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectLockConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif

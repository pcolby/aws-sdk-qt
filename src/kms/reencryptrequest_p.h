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

#ifndef QTAWS_REENCRYPTREQUEST_P_H
#define QTAWS_REENCRYPTREQUEST_P_H

#include "kmsrequest_p.h"
#include "reencryptrequest.h"

namespace QtAws {
namespace KMS {

class ReEncryptRequest;

class QTAWS_EXPORT ReEncryptRequestPrivate : public KMSRequestPrivate {

public:
    ReEncryptRequestPrivate(const KMS::Action action,
                                   ReEncryptRequest * const q);
    ReEncryptRequestPrivate(const ReEncryptRequestPrivate &other,
                                   ReEncryptRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReEncryptRequest)

};

} // namespace KMS
} // namespace QtAws

#endif

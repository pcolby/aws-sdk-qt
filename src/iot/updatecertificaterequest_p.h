/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATECERTIFICATEREQUEST_P_H
#define QTAWS_UPDATECERTIFICATEREQUEST_P_H

#include "iot_p.h"
#include "updatecertificaterequest.h"

namespace AWS {

namespace IoT {

class UpdateCertificateRequest;

class QTAWS_EXPORT UpdateCertificateRequestPrivate : public IoTPrivate {

public:
    UpdateCertificateRequestPrivate(const IoT::Action action,
                                   UpdateCertificateRequest * const q);
    UpdateCertificateRequestPrivate(const UpdateCertificateRequestPrivate &other,
                                   UpdateCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateRequest)

};

} // namespace IoT
} // namespace AWS

#endif

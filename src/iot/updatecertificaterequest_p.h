// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEREQUEST_P_H
#define QTAWS_UPDATECERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "updatecertificaterequest.h"

namespace QtAws {
namespace IoT {

class UpdateCertificateRequest;

class UpdateCertificateRequestPrivate : public IoTRequestPrivate {

public:
    UpdateCertificateRequestPrivate(const IoTRequest::Action action,
                                   UpdateCertificateRequest * const q);
    UpdateCertificateRequestPrivate(const UpdateCertificateRequestPrivate &other,
                                   UpdateCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

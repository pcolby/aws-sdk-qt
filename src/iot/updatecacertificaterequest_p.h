// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACERTIFICATEREQUEST_P_H
#define QTAWS_UPDATECACERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "updatecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class UpdateCACertificateRequest;

class UpdateCACertificateRequestPrivate : public IoTRequestPrivate {

public:
    UpdateCACertificateRequestPrivate(const IoTRequest::Action action,
                                   UpdateCACertificateRequest * const q);
    UpdateCACertificateRequestPrivate(const UpdateCACertificateRequestPrivate &other,
                                   UpdateCACertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

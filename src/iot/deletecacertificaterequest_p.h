// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACERTIFICATEREQUEST_P_H
#define QTAWS_DELETECACERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "deletecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteCACertificateRequest;

class DeleteCACertificateRequestPrivate : public IoTRequestPrivate {

public:
    DeleteCACertificateRequestPrivate(const IoTRequest::Action action,
                                   DeleteCACertificateRequest * const q);
    DeleteCACertificateRequestPrivate(const DeleteCACertificateRequestPrivate &other,
                                   DeleteCACertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACERTIFICATEREQUEST_H
#define QTAWS_UPDATECACERTIFICATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateCACertificateRequestPrivate;

class QTAWSIOT_EXPORT UpdateCACertificateRequest : public IoTRequest {

public:
    UpdateCACertificateRequest(const UpdateCACertificateRequest &other);
    UpdateCACertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

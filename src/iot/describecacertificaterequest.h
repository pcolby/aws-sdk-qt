// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACERTIFICATEREQUEST_H
#define QTAWS_DESCRIBECACERTIFICATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeCACertificateRequestPrivate;

class QTAWSIOT_EXPORT DescribeCACertificateRequest : public IoTRequest {

public:
    DescribeCACertificateRequest(const DescribeCACertificateRequest &other);
    DescribeCACertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

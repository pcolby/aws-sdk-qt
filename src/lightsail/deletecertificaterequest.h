// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEREQUEST_H
#define QTAWS_DELETECERTIFICATEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteCertificateRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteCertificateRequest : public LightsailRequest {

public:
    DeleteCertificateRequest(const DeleteCertificateRequest &other);
    DeleteCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

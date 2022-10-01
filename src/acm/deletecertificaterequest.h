// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEREQUEST_H
#define QTAWS_DELETECERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class DeleteCertificateRequestPrivate;

class QTAWSACM_EXPORT DeleteCertificateRequest : public AcmRequest {

public:
    DeleteCertificateRequest(const DeleteCertificateRequest &other);
    DeleteCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSIGNINGCERTIFICATEREQUEST_H
#define QTAWS_UPLOADSIGNINGCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UploadSigningCertificateRequestPrivate;

class QTAWSIAM_EXPORT UploadSigningCertificateRequest : public IamRequest {

public:
    UploadSigningCertificateRequest(const UploadSigningCertificateRequest &other);
    UploadSigningCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadSigningCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

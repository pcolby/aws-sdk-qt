// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNINGCERTIFICATEREQUEST_H
#define QTAWS_DELETESIGNINGCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSigningCertificateRequestPrivate;

class QTAWSIAM_EXPORT DeleteSigningCertificateRequest : public IamRequest {

public:
    DeleteSigningCertificateRequest(const DeleteSigningCertificateRequest &other);
    DeleteSigningCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSigningCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

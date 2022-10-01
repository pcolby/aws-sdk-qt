// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNINGCERTIFICATEREQUEST_H
#define QTAWS_UPDATESIGNINGCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSigningCertificateRequestPrivate;

class QTAWSIAM_EXPORT UpdateSigningCertificateRequest : public IamRequest {

public:
    UpdateSigningCertificateRequest(const UpdateSigningCertificateRequest &other);
    UpdateSigningCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSigningCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

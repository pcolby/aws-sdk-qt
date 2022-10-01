// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCERTIFICATEREQUEST_H
#define QTAWS_UPDATESERVERCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateServerCertificateRequestPrivate;

class QTAWSIAM_EXPORT UpdateServerCertificateRequest : public IamRequest {

public:
    UpdateServerCertificateRequest(const UpdateServerCertificateRequest &other);
    UpdateServerCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

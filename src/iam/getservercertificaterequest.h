// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERCERTIFICATEREQUEST_H
#define QTAWS_GETSERVERCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetServerCertificateRequestPrivate;

class QTAWSIAM_EXPORT GetServerCertificateRequest : public IamRequest {

public:
    GetServerCertificateRequest(const GetServerCertificateRequest &other);
    GetServerCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

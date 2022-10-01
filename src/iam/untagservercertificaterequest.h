// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSERVERCERTIFICATEREQUEST_H
#define QTAWS_UNTAGSERVERCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UntagServerCertificateRequestPrivate;

class QTAWSIAM_EXPORT UntagServerCertificateRequest : public IamRequest {

public:
    UntagServerCertificateRequest(const UntagServerCertificateRequest &other);
    UntagServerCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

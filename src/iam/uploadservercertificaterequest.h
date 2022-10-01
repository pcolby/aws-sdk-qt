// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSERVERCERTIFICATEREQUEST_H
#define QTAWS_UPLOADSERVERCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UploadServerCertificateRequestPrivate;

class QTAWSIAM_EXPORT UploadServerCertificateRequest : public IamRequest {

public:
    UploadServerCertificateRequest(const UploadServerCertificateRequest &other);
    UploadServerCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

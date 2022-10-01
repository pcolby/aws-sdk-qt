// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSERVERCERTIFICATEREQUEST_P_H
#define QTAWS_UPLOADSERVERCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "uploadservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class UploadServerCertificateRequest;

class UploadServerCertificateRequestPrivate : public IamRequestPrivate {

public:
    UploadServerCertificateRequestPrivate(const IamRequest::Action action,
                                   UploadServerCertificateRequest * const q);
    UploadServerCertificateRequestPrivate(const UploadServerCertificateRequestPrivate &other,
                                   UploadServerCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

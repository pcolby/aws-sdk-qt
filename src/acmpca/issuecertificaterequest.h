// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISSUECERTIFICATEREQUEST_H
#define QTAWS_ISSUECERTIFICATEREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class IssueCertificateRequestPrivate;

class QTAWSACMPCA_EXPORT IssueCertificateRequest : public AcmPcaRequest {

public:
    IssueCertificateRequest(const IssueCertificateRequest &other);
    IssueCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IssueCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif

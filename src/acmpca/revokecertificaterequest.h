// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECERTIFICATEREQUEST_H
#define QTAWS_REVOKECERTIFICATEREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class RevokeCertificateRequestPrivate;

class QTAWSACMPCA_EXPORT RevokeCertificateRequest : public AcmPcaRequest {

public:
    RevokeCertificateRequest(const RevokeCertificateRequest &other);
    RevokeCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif

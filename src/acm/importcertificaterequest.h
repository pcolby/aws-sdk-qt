// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEREQUEST_H
#define QTAWS_IMPORTCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class ImportCertificateRequestPrivate;

class QTAWSACM_EXPORT ImportCertificateRequest : public AcmRequest {

public:
    ImportCertificateRequest(const ImportCertificateRequest &other);
    ImportCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif

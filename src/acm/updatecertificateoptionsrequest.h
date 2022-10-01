// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEOPTIONSREQUEST_H
#define QTAWS_UPDATECERTIFICATEOPTIONSREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class UpdateCertificateOptionsRequestPrivate;

class QTAWSACM_EXPORT UpdateCertificateOptionsRequest : public AcmRequest {

public:
    UpdateCertificateOptionsRequest(const UpdateCertificateOptionsRequest &other);
    UpdateCertificateOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCertificateOptionsRequest)

};

} // namespace Acm
} // namespace QtAws

#endif

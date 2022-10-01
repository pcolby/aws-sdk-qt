// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMCERTIFICATEREQUEST_H
#define QTAWS_REMOVETAGSFROMCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class RemoveTagsFromCertificateRequestPrivate;

class QTAWSACM_EXPORT RemoveTagsFromCertificateRequest : public AcmRequest {

public:
    RemoveTagsFromCertificateRequest(const RemoveTagsFromCertificateRequest &other);
    RemoveTagsFromCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif

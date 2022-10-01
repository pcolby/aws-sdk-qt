// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATEAUTHORITIESREQUEST_H
#define QTAWS_LISTCERTIFICATEAUTHORITIESREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class ListCertificateAuthoritiesRequestPrivate;

class QTAWSACMPCA_EXPORT ListCertificateAuthoritiesRequest : public AcmPcaRequest {

public:
    ListCertificateAuthoritiesRequest(const ListCertificateAuthoritiesRequest &other);
    ListCertificateAuthoritiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCertificateAuthoritiesRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif

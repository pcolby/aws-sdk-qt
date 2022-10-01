// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATEAUTHORITIESRESPONSE_H
#define QTAWS_LISTCERTIFICATEAUTHORITIESRESPONSE_H

#include "acmpcaresponse.h"
#include "listcertificateauthoritiesrequest.h"

namespace QtAws {
namespace AcmPca {

class ListCertificateAuthoritiesResponsePrivate;

class QTAWSACMPCA_EXPORT ListCertificateAuthoritiesResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    ListCertificateAuthoritiesResponse(const ListCertificateAuthoritiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCertificateAuthoritiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCertificateAuthoritiesResponse)
    Q_DISABLE_COPY(ListCertificateAuthoritiesResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif

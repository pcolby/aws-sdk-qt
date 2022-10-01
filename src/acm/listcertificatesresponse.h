// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESRESPONSE_H
#define QTAWS_LISTCERTIFICATESRESPONSE_H

#include "acmresponse.h"
#include "listcertificatesrequest.h"

namespace QtAws {
namespace Acm {

class ListCertificatesResponsePrivate;

class QTAWSACM_EXPORT ListCertificatesResponse : public AcmResponse {
    Q_OBJECT

public:
    ListCertificatesResponse(const ListCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCertificatesResponse)
    Q_DISABLE_COPY(ListCertificatesResponse)

};

} // namespace Acm
} // namespace QtAws

#endif

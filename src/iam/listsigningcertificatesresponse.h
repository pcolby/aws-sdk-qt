// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGCERTIFICATESRESPONSE_H
#define QTAWS_LISTSIGNINGCERTIFICATESRESPONSE_H

#include "iamresponse.h"
#include "listsigningcertificatesrequest.h"

namespace QtAws {
namespace Iam {

class ListSigningCertificatesResponsePrivate;

class QTAWSIAM_EXPORT ListSigningCertificatesResponse : public IamResponse {
    Q_OBJECT

public:
    ListSigningCertificatesResponse(const ListSigningCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSigningCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningCertificatesResponse)
    Q_DISABLE_COPY(ListSigningCertificatesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif

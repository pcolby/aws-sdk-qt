// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORCERTIFICATERESPONSE_H
#define QTAWS_LISTTAGSFORCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "listtagsforcertificaterequest.h"

namespace QtAws {
namespace Acm {

class ListTagsForCertificateResponsePrivate;

class QTAWSACM_EXPORT ListTagsForCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    ListTagsForCertificateResponse(const ListTagsForCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForCertificateResponse)
    Q_DISABLE_COPY(ListTagsForCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif

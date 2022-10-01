// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMCERTIFICATERESPONSE_H
#define QTAWS_REMOVETAGSFROMCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "removetagsfromcertificaterequest.h"

namespace QtAws {
namespace Acm {

class RemoveTagsFromCertificateResponsePrivate;

class QTAWSACM_EXPORT RemoveTagsFromCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    RemoveTagsFromCertificateResponse(const RemoveTagsFromCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTagsFromCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromCertificateResponse)
    Q_DISABLE_COPY(RemoveTagsFromCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEOPTIONSRESPONSE_H
#define QTAWS_UPDATECERTIFICATEOPTIONSRESPONSE_H

#include "acmresponse.h"
#include "updatecertificateoptionsrequest.h"

namespace QtAws {
namespace Acm {

class UpdateCertificateOptionsResponsePrivate;

class QTAWSACM_EXPORT UpdateCertificateOptionsResponse : public AcmResponse {
    Q_OBJECT

public:
    UpdateCertificateOptionsResponse(const UpdateCertificateOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCertificateOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCertificateOptionsResponse)
    Q_DISABLE_COPY(UpdateCertificateOptionsResponse)

};

} // namespace Acm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCLIENTCERTIFICATERESPONSE_P_H
#define QTAWS_CREATEHSMCLIENTCERTIFICATERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateHsmClientCertificateResponse;

class CreateHsmClientCertificateResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateHsmClientCertificateResponsePrivate(CreateHsmClientCertificateResponse * const q);

    void parseCreateHsmClientCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHsmClientCertificateResponse)
    Q_DISABLE_COPY(CreateHsmClientCertificateResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

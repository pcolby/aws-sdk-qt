// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMCLIENTCERTIFICATERESPONSE_P_H
#define QTAWS_DELETEHSMCLIENTCERTIFICATERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmClientCertificateResponse;

class DeleteHsmClientCertificateResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteHsmClientCertificateResponsePrivate(DeleteHsmClientCertificateResponse * const q);

    void parseDeleteHsmClientCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHsmClientCertificateResponse)
    Q_DISABLE_COPY(DeleteHsmClientCertificateResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

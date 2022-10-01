// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCERTIFICATERESPONSE_P_H
#define QTAWS_EXPORTCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class ExportCertificateResponse;

class ExportCertificateResponsePrivate : public AcmResponsePrivate {

public:

    explicit ExportCertificateResponsePrivate(ExportCertificateResponse * const q);

    void parseExportCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportCertificateResponse)
    Q_DISABLE_COPY(ExportCertificateResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif

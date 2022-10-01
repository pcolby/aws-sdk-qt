// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEOPTIONSRESPONSE_P_H
#define QTAWS_UPDATECERTIFICATEOPTIONSRESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class UpdateCertificateOptionsResponse;

class UpdateCertificateOptionsResponsePrivate : public AcmResponsePrivate {

public:

    explicit UpdateCertificateOptionsResponsePrivate(UpdateCertificateOptionsResponse * const q);

    void parseUpdateCertificateOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateOptionsResponse)
    Q_DISABLE_COPY(UpdateCertificateOptionsResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif

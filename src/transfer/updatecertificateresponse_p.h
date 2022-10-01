// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATERESPONSE_P_H
#define QTAWS_UPDATECERTIFICATERESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class UpdateCertificateResponse;

class UpdateCertificateResponsePrivate : public TransferResponsePrivate {

public:

    explicit UpdateCertificateResponsePrivate(UpdateCertificateResponse * const q);

    void parseUpdateCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateResponse)
    Q_DISABLE_COPY(UpdateCertificateResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTORECERTIFICATERESPONSE_P_H
#define QTAWS_GETTRUSTSTORECERTIFICATERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreCertificateResponse;

class GetTrustStoreCertificateResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetTrustStoreCertificateResponsePrivate(GetTrustStoreCertificateResponse * const q);

    void parseGetTrustStoreCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrustStoreCertificateResponse)
    Q_DISABLE_COPY(GetTrustStoreCertificateResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

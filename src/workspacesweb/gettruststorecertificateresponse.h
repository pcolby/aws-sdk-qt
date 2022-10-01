// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTORECERTIFICATERESPONSE_H
#define QTAWS_GETTRUSTSTORECERTIFICATERESPONSE_H

#include "workspaceswebresponse.h"
#include "gettruststorecertificaterequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreCertificateResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetTrustStoreCertificateResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetTrustStoreCertificateResponse(const GetTrustStoreCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrustStoreCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrustStoreCertificateResponse)
    Q_DISABLE_COPY(GetTrustStoreCertificateResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

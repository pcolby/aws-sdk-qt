// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORECERTIFICATESRESPONSE_H
#define QTAWS_LISTTRUSTSTORECERTIFICATESRESPONSE_H

#include "workspaceswebresponse.h"
#include "listtruststorecertificatesrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoreCertificatesResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListTrustStoreCertificatesResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListTrustStoreCertificatesResponse(const ListTrustStoreCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrustStoreCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrustStoreCertificatesResponse)
    Q_DISABLE_COPY(ListTrustStoreCertificatesResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITECERTIFICATEAUTHORITIESRESPONSE_H
#define QTAWS_LISTWEBSITECERTIFICATEAUTHORITIESRESPONSE_H

#include "worklinkresponse.h"
#include "listwebsitecertificateauthoritiesrequest.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteCertificateAuthoritiesResponsePrivate;

class QTAWSWORKLINK_EXPORT ListWebsiteCertificateAuthoritiesResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    ListWebsiteCertificateAuthoritiesResponse(const ListWebsiteCertificateAuthoritiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWebsiteCertificateAuthoritiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebsiteCertificateAuthoritiesResponse)
    Q_DISABLE_COPY(ListWebsiteCertificateAuthoritiesResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif

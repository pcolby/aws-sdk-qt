// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITECERTIFICATEAUTHORITIESRESPONSE_P_H
#define QTAWS_LISTWEBSITECERTIFICATEAUTHORITIESRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteCertificateAuthoritiesResponse;

class ListWebsiteCertificateAuthoritiesResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit ListWebsiteCertificateAuthoritiesResponsePrivate(ListWebsiteCertificateAuthoritiesResponse * const q);

    void parseListWebsiteCertificateAuthoritiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWebsiteCertificateAuthoritiesResponse)
    Q_DISABLE_COPY(ListWebsiteCertificateAuthoritiesResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

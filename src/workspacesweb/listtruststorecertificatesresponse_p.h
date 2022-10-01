// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORECERTIFICATESRESPONSE_P_H
#define QTAWS_LISTTRUSTSTORECERTIFICATESRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoreCertificatesResponse;

class ListTrustStoreCertificatesResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit ListTrustStoreCertificatesResponsePrivate(ListTrustStoreCertificatesResponse * const q);

    void parseListTrustStoreCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrustStoreCertificatesResponse)
    Q_DISABLE_COPY(ListTrustStoreCertificatesResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

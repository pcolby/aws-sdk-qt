// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESRESPONSE_P_H
#define QTAWS_LISTCERTIFICATESRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class ListCertificatesResponse;

class ListCertificatesResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit ListCertificatesResponsePrivate(ListCertificatesResponse * const q);

    void parseListCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCertificatesResponse)
    Q_DISABLE_COPY(ListCertificatesResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESRESPONSE_P_H
#define QTAWS_LISTCERTIFICATESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListCertificatesResponse;

class ListCertificatesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListCertificatesResponsePrivate(ListCertificatesResponse * const q);

    void parseListCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCertificatesResponse)
    Q_DISABLE_COPY(ListCertificatesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

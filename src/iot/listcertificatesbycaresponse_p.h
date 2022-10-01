// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESBYCARESPONSE_P_H
#define QTAWS_LISTCERTIFICATESBYCARESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListCertificatesByCAResponse;

class ListCertificatesByCAResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListCertificatesByCAResponsePrivate(ListCertificatesByCAResponse * const q);

    void parseListCertificatesByCAResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCertificatesByCAResponse)
    Q_DISABLE_COPY(ListCertificatesByCAResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

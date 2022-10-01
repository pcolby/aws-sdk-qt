// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACERTIFICATESRESPONSE_P_H
#define QTAWS_LISTCACERTIFICATESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListCACertificatesResponse;

class ListCACertificatesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListCACertificatesResponsePrivate(ListCACertificatesResponse * const q);

    void parseListCACertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCACertificatesResponse)
    Q_DISABLE_COPY(ListCACertificatesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

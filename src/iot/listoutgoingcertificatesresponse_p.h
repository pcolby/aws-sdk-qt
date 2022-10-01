// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGCERTIFICATESRESPONSE_P_H
#define QTAWS_LISTOUTGOINGCERTIFICATESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListOutgoingCertificatesResponse;

class ListOutgoingCertificatesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListOutgoingCertificatesResponsePrivate(ListOutgoingCertificatesResponse * const q);

    void parseListOutgoingCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOutgoingCertificatesResponse)
    Q_DISABLE_COPY(ListOutgoingCertificatesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

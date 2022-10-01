// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATERESPONSE_P_H
#define QTAWS_DESCRIBECERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeCertificateResponse;

class DescribeCertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeCertificateResponsePrivate(DescribeCertificateResponse * const q);

    void parseDescribeCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateResponse)
    Q_DISABLE_COPY(DescribeCertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

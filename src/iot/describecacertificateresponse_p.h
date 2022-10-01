// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACERTIFICATERESPONSE_P_H
#define QTAWS_DESCRIBECACERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeCACertificateResponse;

class DescribeCACertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeCACertificateResponsePrivate(DescribeCACertificateResponse * const q);

    void parseDescribeCACertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCACertificateResponse)
    Q_DISABLE_COPY(DescribeCACertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

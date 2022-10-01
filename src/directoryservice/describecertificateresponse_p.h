// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATERESPONSE_P_H
#define QTAWS_DESCRIBECERTIFICATERESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeCertificateResponse;

class DescribeCertificateResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeCertificateResponsePrivate(DescribeCertificateResponse * const q);

    void parseDescribeCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateResponse)
    Q_DISABLE_COPY(DescribeCertificateResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESRESPONSE_P_H
#define QTAWS_DESCRIBECERTIFICATESRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DescribeCertificatesResponse;

class DescribeCertificatesResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DescribeCertificatesResponsePrivate(DescribeCertificatesResponse * const q);

    void parseDescribeCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCertificatesResponse)
    Q_DISABLE_COPY(DescribeCertificatesResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif

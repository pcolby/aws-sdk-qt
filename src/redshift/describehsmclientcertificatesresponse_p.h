// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCLIENTCERTIFICATESRESPONSE_P_H
#define QTAWS_DESCRIBEHSMCLIENTCERTIFICATESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmClientCertificatesResponse;

class DescribeHsmClientCertificatesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeHsmClientCertificatesResponsePrivate(DescribeHsmClientCertificatesResponse * const q);

    void parseDescribeHsmClientCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHsmClientCertificatesResponse)
    Q_DISABLE_COPY(DescribeHsmClientCertificatesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

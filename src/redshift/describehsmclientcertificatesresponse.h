// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCLIENTCERTIFICATESRESPONSE_H
#define QTAWS_DESCRIBEHSMCLIENTCERTIFICATESRESPONSE_H

#include "redshiftresponse.h"
#include "describehsmclientcertificatesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmClientCertificatesResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeHsmClientCertificatesResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeHsmClientCertificatesResponse(const DescribeHsmClientCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHsmClientCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHsmClientCertificatesResponse)
    Q_DISABLE_COPY(DescribeHsmClientCertificatesResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

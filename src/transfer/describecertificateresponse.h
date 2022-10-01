// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATERESPONSE_H
#define QTAWS_DESCRIBECERTIFICATERESPONSE_H

#include "transferresponse.h"
#include "describecertificaterequest.h"

namespace QtAws {
namespace Transfer {

class DescribeCertificateResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeCertificateResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeCertificateResponse(const DescribeCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificateResponse)
    Q_DISABLE_COPY(DescribeCertificateResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif

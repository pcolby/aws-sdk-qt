// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESRESPONSE_H
#define QTAWS_DESCRIBECERTIFICATESRESPONSE_H

#include "docdbresponse.h"
#include "describecertificatesrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeCertificatesResponsePrivate;

class QTAWSDOCDB_EXPORT DescribeCertificatesResponse : public DocDbResponse {
    Q_OBJECT

public:
    DescribeCertificatesResponse(const DescribeCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificatesResponse)
    Q_DISABLE_COPY(DescribeCertificatesResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif

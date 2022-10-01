// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYRESPONSE_H
#define QTAWS_DESCRIBEENTITYRESPONSE_H

#include "marketplacecatalogresponse.h"
#include "describeentityrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeEntityResponsePrivate;

class QTAWSMARKETPLACECATALOG_EXPORT DescribeEntityResponse : public MarketplaceCatalogResponse {
    Q_OBJECT

public:
    DescribeEntityResponse(const DescribeEntityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEntityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntityResponse)
    Q_DISABLE_COPY(DescribeEntityResponse)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif

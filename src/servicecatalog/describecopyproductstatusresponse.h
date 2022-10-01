// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYPRODUCTSTATUSRESPONSE_H
#define QTAWS_DESCRIBECOPYPRODUCTSTATUSRESPONSE_H

#include "servicecatalogresponse.h"
#include "describecopyproductstatusrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeCopyProductStatusResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeCopyProductStatusResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeCopyProductStatusResponse(const DescribeCopyProductStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCopyProductStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCopyProductStatusResponse)
    Q_DISABLE_COPY(DescribeCopyProductStatusResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

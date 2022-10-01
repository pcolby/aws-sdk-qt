// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYPRODUCTSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBECOPYPRODUCTSTATUSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeCopyProductStatusResponse;

class DescribeCopyProductStatusResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeCopyProductStatusResponsePrivate(DescribeCopyProductStatusResponse * const q);

    void parseDescribeCopyProductStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCopyProductStatusResponse)
    Q_DISABLE_COPY(DescribeCopyProductStatusResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINENDPOINTOPTIONSRESPONSE_H
#define QTAWS_DESCRIBEDOMAINENDPOINTOPTIONSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describedomainendpointoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeDomainEndpointOptionsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeDomainEndpointOptionsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeDomainEndpointOptionsResponse(const DescribeDomainEndpointOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainEndpointOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainEndpointOptionsResponse)
    Q_DISABLE_COPY(DescribeDomainEndpointOptionsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

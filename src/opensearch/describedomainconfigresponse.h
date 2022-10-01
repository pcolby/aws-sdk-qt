// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGRESPONSE_H
#define QTAWS_DESCRIBEDOMAINCONFIGRESPONSE_H

#include "opensearchresponse.h"
#include "describedomainconfigrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainConfigResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainConfigResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeDomainConfigResponse(const DescribeDomainConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainConfigResponse)
    Q_DISABLE_COPY(DescribeDomainConfigResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

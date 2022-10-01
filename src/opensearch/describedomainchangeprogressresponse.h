// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCHANGEPROGRESSRESPONSE_H
#define QTAWS_DESCRIBEDOMAINCHANGEPROGRESSRESPONSE_H

#include "opensearchresponse.h"
#include "describedomainchangeprogressrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainChangeProgressResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainChangeProgressResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeDomainChangeProgressResponse(const DescribeDomainChangeProgressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainChangeProgressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainChangeProgressResponse)
    Q_DISABLE_COPY(DescribeDomainChangeProgressResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

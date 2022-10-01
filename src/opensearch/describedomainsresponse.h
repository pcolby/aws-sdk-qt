// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINSRESPONSE_H
#define QTAWS_DESCRIBEDOMAINSRESPONSE_H

#include "opensearchresponse.h"
#include "describedomainsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeDomainsResponse(const DescribeDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainsResponse)
    Q_DISABLE_COPY(DescribeDomainsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

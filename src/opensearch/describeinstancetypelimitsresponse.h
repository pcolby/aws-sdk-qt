// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPELIMITSRESPONSE_H
#define QTAWS_DESCRIBEINSTANCETYPELIMITSRESPONSE_H

#include "opensearchresponse.h"
#include "describeinstancetypelimitsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeInstanceTypeLimitsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeInstanceTypeLimitsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeInstanceTypeLimitsResponse(const DescribeInstanceTypeLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceTypeLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceTypeLimitsResponse)
    Q_DISABLE_COPY(DescribeInstanceTypeLimitsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

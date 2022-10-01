// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGESRESPONSE_H
#define QTAWS_DESCRIBEPACKAGESRESPONSE_H

#include "elasticsearchresponse.h"
#include "describepackagesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribePackagesResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribePackagesResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribePackagesResponse(const DescribePackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackagesResponse)
    Q_DISABLE_COPY(DescribePackagesResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

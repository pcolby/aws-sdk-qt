// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXFIELDSRESPONSE_H
#define QTAWS_DESCRIBEINDEXFIELDSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describeindexfieldsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeIndexFieldsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeIndexFieldsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeIndexFieldsResponse(const DescribeIndexFieldsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIndexFieldsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIndexFieldsResponse)
    Q_DISABLE_COPY(DescribeIndexFieldsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

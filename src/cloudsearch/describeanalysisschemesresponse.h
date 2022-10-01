// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISSCHEMESRESPONSE_H
#define QTAWS_DESCRIBEANALYSISSCHEMESRESPONSE_H

#include "cloudsearchresponse.h"
#include "describeanalysisschemesrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAnalysisSchemesResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeAnalysisSchemesResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeAnalysisSchemesResponse(const DescribeAnalysisSchemesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnalysisSchemesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnalysisSchemesResponse)
    Q_DISABLE_COPY(DescribeAnalysisSchemesResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

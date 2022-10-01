// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAILSRESPONSE_H
#define QTAWS_DESCRIBETRAILSRESPONSE_H

#include "cloudtrailresponse.h"
#include "describetrailsrequest.h"

namespace QtAws {
namespace CloudTrail {

class DescribeTrailsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT DescribeTrailsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    DescribeTrailsResponse(const DescribeTrailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrailsResponse)
    Q_DISABLE_COPY(DescribeTrailsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
